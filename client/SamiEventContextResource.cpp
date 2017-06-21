
#include "SamiEventContextResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiEventContextResource::SamiEventContextResource() {
    init();
}

SamiEventContextResource::~SamiEventContextResource() {
    this->cleanup();
}

void
SamiEventContextResource::init() {
    pEvent_name = null;
pParameters = null;
pType = null;
}

void
SamiEventContextResource::cleanup() {
    if(pEvent_name != null) {
        
        delete pEvent_name;
        pEvent_name = null;
    }
if(pParameters != null) {
        pParameters->RemoveAll(true);
        delete pParameters;
        pParameters = null;
    }
if(pType != null) {
        
        delete pType;
        pType = null;
    }
}


SamiEventContextResource*
SamiEventContextResource::fromJson(String* json) {
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
SamiEventContextResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pEvent_nameKey = new JsonString(L"event_name");
        IJsonValue* pEvent_nameVal = null;
        pJsonObject->GetValue(pEvent_nameKey, pEvent_nameVal);
        if(pEvent_nameVal != null) {
            
            pEvent_name = new String();
            jsonToValue(pEvent_name, pEvent_nameVal, L"String", L"String");
        }
        delete pEvent_nameKey;
JsonString* pParametersKey = new JsonString(L"parameters");
        IJsonValue* pParametersVal = null;
        pJsonObject->GetValue(pParametersKey, pParametersVal);
        if(pParametersVal != null) {
            pParameters = new HashMap();
            
            jsonToValue(pParameters, pParametersVal, L"HashMap", L"SamiExpressionResource");
        }
        delete pParametersKey;
JsonString* pTypeKey = new JsonString(L"type");
        IJsonValue* pTypeVal = null;
        pJsonObject->GetValue(pTypeKey, pTypeVal);
        if(pTypeVal != null) {
            
            pType = new String();
            jsonToValue(pType, pTypeVal, L"String", L"String");
        }
        delete pTypeKey;
    }
}

SamiEventContextResource::SamiEventContextResource(String* json) {
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
SamiEventContextResource::asJson ()
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
SamiEventContextResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pEvent_nameKey = new JsonString(L"event_name");
    pJsonObject->Add(pEvent_nameKey, toJson(getPEventName(), "String", ""));

    JsonString *pParametersKey = new JsonString(L"parameters");
    pJsonObject->Add(pParametersKey, toJson(getPParameters(), "SamiExpressionResource", "map"));

    JsonString *pTypeKey = new JsonString(L"type");
    pJsonObject->Add(pTypeKey, toJson(getPType(), "String", ""));

    return pJsonObject;
}

String*
SamiEventContextResource::getPEventName() {
    return pEvent_name;
}
void
SamiEventContextResource::setPEventName(String* pEvent_name) {
    this->pEvent_name = pEvent_name;
}

HashMap*
SamiEventContextResource::getPParameters() {
    return pParameters;
}
void
SamiEventContextResource::setPParameters(HashMap* pParameters) {
    this->pParameters = pParameters;
}

String*
SamiEventContextResource::getPType() {
    return pType;
}
void
SamiEventContextResource::setPType(String* pType) {
    this->pType = pType;
}



} /* namespace Swagger */

