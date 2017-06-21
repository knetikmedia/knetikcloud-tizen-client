
#include "SamiExpirable.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiExpirable::SamiExpirable() {
    init();
}

SamiExpirable::~SamiExpirable() {
    this->cleanup();
}

void
SamiExpirable::init() {
    pDescription = null;
pType_hint = null;
pTime_length = null;
pUnit_of_time = null;
}

void
SamiExpirable::cleanup() {
    if(pDescription != null) {
        
        delete pDescription;
        pDescription = null;
    }
if(pType_hint != null) {
        
        delete pType_hint;
        pType_hint = null;
    }
if(pTime_length != null) {
        
        delete pTime_length;
        pTime_length = null;
    }
if(pUnit_of_time != null) {
        
        delete pUnit_of_time;
        pUnit_of_time = null;
    }
}


SamiExpirable*
SamiExpirable::fromJson(String* json) {
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
SamiExpirable::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pDescriptionKey = new JsonString(L"description");
        IJsonValue* pDescriptionVal = null;
        pJsonObject->GetValue(pDescriptionKey, pDescriptionVal);
        if(pDescriptionVal != null) {
            
            pDescription = new String();
            jsonToValue(pDescription, pDescriptionVal, L"String", L"String");
        }
        delete pDescriptionKey;
JsonString* pType_hintKey = new JsonString(L"type_hint");
        IJsonValue* pType_hintVal = null;
        pJsonObject->GetValue(pType_hintKey, pType_hintVal);
        if(pType_hintVal != null) {
            
            pType_hint = new String();
            jsonToValue(pType_hint, pType_hintVal, L"String", L"String");
        }
        delete pType_hintKey;
JsonString* pTime_lengthKey = new JsonString(L"time_length");
        IJsonValue* pTime_lengthVal = null;
        pJsonObject->GetValue(pTime_lengthKey, pTime_lengthVal);
        if(pTime_lengthVal != null) {
            
            pTime_length = new Integer();
            jsonToValue(pTime_length, pTime_lengthVal, L"Integer", L"Integer");
        }
        delete pTime_lengthKey;
JsonString* pUnit_of_timeKey = new JsonString(L"unit_of_time");
        IJsonValue* pUnit_of_timeVal = null;
        pJsonObject->GetValue(pUnit_of_timeKey, pUnit_of_timeVal);
        if(pUnit_of_timeVal != null) {
            
            pUnit_of_time = new String();
            jsonToValue(pUnit_of_time, pUnit_of_timeVal, L"String", L"String");
        }
        delete pUnit_of_timeKey;
    }
}

SamiExpirable::SamiExpirable(String* json) {
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
SamiExpirable::asJson ()
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
SamiExpirable::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pDescriptionKey = new JsonString(L"description");
    pJsonObject->Add(pDescriptionKey, toJson(getPDescription(), "String", ""));

    JsonString *pType_hintKey = new JsonString(L"type_hint");
    pJsonObject->Add(pType_hintKey, toJson(getPTypeHint(), "String", ""));

    JsonString *pTime_lengthKey = new JsonString(L"time_length");
    pJsonObject->Add(pTime_lengthKey, toJson(getPTimeLength(), "Integer", ""));

    JsonString *pUnit_of_timeKey = new JsonString(L"unit_of_time");
    pJsonObject->Add(pUnit_of_timeKey, toJson(getPUnitOfTime(), "String", ""));

    return pJsonObject;
}

String*
SamiExpirable::getPDescription() {
    return pDescription;
}
void
SamiExpirable::setPDescription(String* pDescription) {
    this->pDescription = pDescription;
}

String*
SamiExpirable::getPTypeHint() {
    return pType_hint;
}
void
SamiExpirable::setPTypeHint(String* pType_hint) {
    this->pType_hint = pType_hint;
}

Integer*
SamiExpirable::getPTimeLength() {
    return pTime_length;
}
void
SamiExpirable::setPTimeLength(Integer* pTime_length) {
    this->pTime_length = pTime_length;
}

String*
SamiExpirable::getPUnitOfTime() {
    return pUnit_of_time;
}
void
SamiExpirable::setPUnitOfTime(String* pUnit_of_time) {
    this->pUnit_of_time = pUnit_of_time;
}



} /* namespace Swagger */

