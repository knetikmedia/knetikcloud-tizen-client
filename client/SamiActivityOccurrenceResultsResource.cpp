
#include "SamiActivityOccurrenceResultsResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiActivityOccurrenceResultsResource::SamiActivityOccurrenceResultsResource() {
    init();
}

SamiActivityOccurrenceResultsResource::~SamiActivityOccurrenceResultsResource() {
    this->cleanup();
}

void
SamiActivityOccurrenceResultsResource::init() {
    pUsers = null;
}

void
SamiActivityOccurrenceResultsResource::cleanup() {
    if(pUsers != null) {
        pUsers->RemoveAll(true);
        delete pUsers;
        pUsers = null;
    }
}


SamiActivityOccurrenceResultsResource*
SamiActivityOccurrenceResultsResource::fromJson(String* json) {
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
SamiActivityOccurrenceResultsResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pUsersKey = new JsonString(L"users");
        IJsonValue* pUsersVal = null;
        pJsonObject->GetValue(pUsersKey, pUsersVal);
        if(pUsersVal != null) {
            pUsers = new ArrayList();
            
            jsonToValue(pUsers, pUsersVal, L"IList", L"SamiUserActivityResultsResource");
        }
        delete pUsersKey;
    }
}

SamiActivityOccurrenceResultsResource::SamiActivityOccurrenceResultsResource(String* json) {
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
SamiActivityOccurrenceResultsResource::asJson ()
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
SamiActivityOccurrenceResultsResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pUsersKey = new JsonString(L"users");
    pJsonObject->Add(pUsersKey, toJson(getPUsers(), "SamiUserActivityResultsResource", "array"));

    return pJsonObject;
}

IList*
SamiActivityOccurrenceResultsResource::getPUsers() {
    return pUsers;
}
void
SamiActivityOccurrenceResultsResource::setPUsers(IList* pUsers) {
    this->pUsers = pUsers;
}



} /* namespace Swagger */

