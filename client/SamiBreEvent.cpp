
#include "SamiBreEvent.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiBreEvent::SamiBreEvent() {
    init();
}

SamiBreEvent::~SamiBreEvent() {
    this->cleanup();
}

void
SamiBreEvent::init() {
    pEvent_name = null;
pParams = null;
}

void
SamiBreEvent::cleanup() {
    if(pEvent_name != null) {
        
        delete pEvent_name;
        pEvent_name = null;
    }
if(pParams != null) {
        
        delete pParams;
        pParams = null;
    }
}


SamiBreEvent*
SamiBreEvent::fromJson(String* json) {
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
SamiBreEvent::fromJsonObject(IJsonValue* pJson) {
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
JsonString* pParamsKey = new JsonString(L"params");
        IJsonValue* pParamsVal = null;
        pJsonObject->GetValue(pParamsKey, pParamsVal);
        if(pParamsVal != null) {
            
            pParams = null;
            jsonToValue(pParams, pParamsVal, L"SamiObject", L"SamiObject");
        }
        delete pParamsKey;
    }
}

SamiBreEvent::SamiBreEvent(String* json) {
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
SamiBreEvent::asJson ()
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
SamiBreEvent::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pEvent_nameKey = new JsonString(L"event_name");
    pJsonObject->Add(pEvent_nameKey, toJson(getPEventName(), "String", ""));

    JsonString *pParamsKey = new JsonString(L"params");
    pJsonObject->Add(pParamsKey, toJson(getPParams(), "SamiObject", ""));

    return pJsonObject;
}

String*
SamiBreEvent::getPEventName() {
    return pEvent_name;
}
void
SamiBreEvent::setPEventName(String* pEvent_name) {
    this->pEvent_name = pEvent_name;
}

SamiObject*
SamiBreEvent::getPParams() {
    return pParams;
}
void
SamiBreEvent::setPParams(SamiObject* pParams) {
    this->pParams = pParams;
}



} /* namespace Swagger */

