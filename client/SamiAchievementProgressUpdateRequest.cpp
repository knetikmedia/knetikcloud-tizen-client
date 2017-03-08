
#include "SamiAchievementProgressUpdateRequest.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiAchievementProgressUpdateRequest::SamiAchievementProgressUpdateRequest() {
    init();
}

SamiAchievementProgressUpdateRequest::~SamiAchievementProgressUpdateRequest() {
    this->cleanup();
}

void
SamiAchievementProgressUpdateRequest::init() {
    pIncrement_value = null;
pProgress_value = null;
}

void
SamiAchievementProgressUpdateRequest::cleanup() {
    if(pIncrement_value != null) {
        
        delete pIncrement_value;
        pIncrement_value = null;
    }
if(pProgress_value != null) {
        
        delete pProgress_value;
        pProgress_value = null;
    }
}


SamiAchievementProgressUpdateRequest*
SamiAchievementProgressUpdateRequest::fromJson(String* json) {
    this->cleanup();
    String str(json->GetPointer());
    int length = str.GetLength();

    ByteBuffer buffer;
    buffer.Construct(length);

    for (int i = 0; i < length; ++i) {
       byte b = str[i];
       buffer.SetByte(b);
    }

    IJsonValue* pJson = JsonParser::ParseN(buffer);
    fromJsonObject(pJson);
    if (pJson->GetType() == JSON_TYPE_OBJECT) {
       JsonObject* pObject = static_cast< JsonObject* >(pJson);
       pObject->RemoveAll(true);
    }
    else if (pJson->GetType() == JSON_TYPE_ARRAY) {
       JsonArray* pArray = static_cast< JsonArray* >(pJson);
       pArray->RemoveAll(true);
    }
    delete pJson;
    return this;
}


void
SamiAchievementProgressUpdateRequest::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pIncrement_valueKey = new JsonString(L"increment_value");
        IJsonValue* pIncrement_valueVal = null;
        pJsonObject->GetValue(pIncrement_valueKey, pIncrement_valueVal);
        if(pIncrement_valueVal != null) {
            
            pIncrement_value = new Boolean(false);
            jsonToValue(pIncrement_value, pIncrement_valueVal, L"Boolean", L"Boolean");
        }
        delete pIncrement_valueKey;
JsonString* pProgress_valueKey = new JsonString(L"progress_value");
        IJsonValue* pProgress_valueVal = null;
        pJsonObject->GetValue(pProgress_valueKey, pProgress_valueVal);
        if(pProgress_valueVal != null) {
            
            pProgress_value = new Integer();
            jsonToValue(pProgress_value, pProgress_valueVal, L"Integer", L"Integer");
        }
        delete pProgress_valueKey;
    }
}

SamiAchievementProgressUpdateRequest::SamiAchievementProgressUpdateRequest(String* json) {
    init();
    String str(json->GetPointer());
    int length = str.GetLength();

    ByteBuffer buffer;
    buffer.Construct(length);

    for (int i = 0; i < length; ++i) {
       byte b = str[i];
       buffer.SetByte(b);
    }

    IJsonValue* pJson = JsonParser::ParseN(buffer);
    fromJsonObject(pJson);
    if (pJson->GetType() == JSON_TYPE_OBJECT) {
       JsonObject* pObject = static_cast< JsonObject* >(pJson);
       pObject->RemoveAll(true);
    }
    else if (pJson->GetType() == JSON_TYPE_ARRAY) {
       JsonArray* pArray = static_cast< JsonArray* >(pJson);
       pArray->RemoveAll(true);
    }
    delete pJson;
}

String
SamiAchievementProgressUpdateRequest::asJson ()
{
    JsonObject* pJsonObject = asJsonObject();

    char *pComposeBuf = new char[256];
    JsonWriter::Compose(pJsonObject, pComposeBuf, 256);
    String s = String(pComposeBuf);

    delete pComposeBuf;
    pJsonObject->RemoveAll(true);
    delete pJsonObject;

    return s;
}

JsonObject*
SamiAchievementProgressUpdateRequest::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pIncrement_valueKey = new JsonString(L"increment_value");
    pJsonObject->Add(pIncrement_valueKey, toJson(getPIncrementValue(), "Boolean", ""));

    JsonString *pProgress_valueKey = new JsonString(L"progress_value");
    pJsonObject->Add(pProgress_valueKey, toJson(getPProgressValue(), "Integer", ""));

    return pJsonObject;
}

Boolean*
SamiAchievementProgressUpdateRequest::getPIncrementValue() {
    return pIncrement_value;
}
void
SamiAchievementProgressUpdateRequest::setPIncrementValue(Boolean* pIncrement_value) {
    this->pIncrement_value = pIncrement_value;
}

Integer*
SamiAchievementProgressUpdateRequest::getPProgressValue() {
    return pProgress_value;
}
void
SamiAchievementProgressUpdateRequest::setPProgressValue(Integer* pProgress_value) {
    this->pProgress_value = pProgress_value;
}



} /* namespace Swagger */

