
#include "SamiTierResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiTierResource::SamiTierResource() {
    init();
}

SamiTierResource::~SamiTierResource() {
    this->cleanup();
}

void
SamiTierResource::init() {
    pAdditional_properties = null;
pName = null;
pRequired_progress = null;
pTrigger_event_name = null;
}

void
SamiTierResource::cleanup() {
    if(pAdditional_properties != null) {
        pAdditional_properties->RemoveAll(true);
        delete pAdditional_properties;
        pAdditional_properties = null;
    }
if(pName != null) {
        
        delete pName;
        pName = null;
    }
if(pRequired_progress != null) {
        
        delete pRequired_progress;
        pRequired_progress = null;
    }
if(pTrigger_event_name != null) {
        
        delete pTrigger_event_name;
        pTrigger_event_name = null;
    }
}


SamiTierResource*
SamiTierResource::fromJson(String* json) {
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
SamiTierResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pAdditional_propertiesKey = new JsonString(L"additional_properties");
        IJsonValue* pAdditional_propertiesVal = null;
        pJsonObject->GetValue(pAdditional_propertiesKey, pAdditional_propertiesVal);
        if(pAdditional_propertiesVal != null) {
            pAdditional_properties = new HashMap();
            
            jsonToValue(pAdditional_properties, pAdditional_propertiesVal, L"HashMap", L"SamiProperty");
        }
        delete pAdditional_propertiesKey;
JsonString* pNameKey = new JsonString(L"name");
        IJsonValue* pNameVal = null;
        pJsonObject->GetValue(pNameKey, pNameVal);
        if(pNameVal != null) {
            
            pName = new String();
            jsonToValue(pName, pNameVal, L"String", L"String");
        }
        delete pNameKey;
JsonString* pRequired_progressKey = new JsonString(L"required_progress");
        IJsonValue* pRequired_progressVal = null;
        pJsonObject->GetValue(pRequired_progressKey, pRequired_progressVal);
        if(pRequired_progressVal != null) {
            
            pRequired_progress = new Integer();
            jsonToValue(pRequired_progress, pRequired_progressVal, L"Integer", L"Integer");
        }
        delete pRequired_progressKey;
JsonString* pTrigger_event_nameKey = new JsonString(L"trigger_event_name");
        IJsonValue* pTrigger_event_nameVal = null;
        pJsonObject->GetValue(pTrigger_event_nameKey, pTrigger_event_nameVal);
        if(pTrigger_event_nameVal != null) {
            
            pTrigger_event_name = new String();
            jsonToValue(pTrigger_event_name, pTrigger_event_nameVal, L"String", L"String");
        }
        delete pTrigger_event_nameKey;
    }
}

SamiTierResource::SamiTierResource(String* json) {
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
SamiTierResource::asJson ()
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
SamiTierResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pAdditional_propertiesKey = new JsonString(L"additional_properties");
    pJsonObject->Add(pAdditional_propertiesKey, toJson(getPAdditionalProperties(), "SamiProperty", "map"));

    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    JsonString *pRequired_progressKey = new JsonString(L"required_progress");
    pJsonObject->Add(pRequired_progressKey, toJson(getPRequiredProgress(), "Integer", ""));

    JsonString *pTrigger_event_nameKey = new JsonString(L"trigger_event_name");
    pJsonObject->Add(pTrigger_event_nameKey, toJson(getPTriggerEventName(), "String", ""));

    return pJsonObject;
}

HashMap*
SamiTierResource::getPAdditionalProperties() {
    return pAdditional_properties;
}
void
SamiTierResource::setPAdditionalProperties(HashMap* pAdditional_properties) {
    this->pAdditional_properties = pAdditional_properties;
}

String*
SamiTierResource::getPName() {
    return pName;
}
void
SamiTierResource::setPName(String* pName) {
    this->pName = pName;
}

Integer*
SamiTierResource::getPRequiredProgress() {
    return pRequired_progress;
}
void
SamiTierResource::setPRequiredProgress(Integer* pRequired_progress) {
    this->pRequired_progress = pRequired_progress;
}

String*
SamiTierResource::getPTriggerEventName() {
    return pTrigger_event_name;
}
void
SamiTierResource::setPTriggerEventName(String* pTrigger_event_name) {
    this->pTrigger_event_name = pTrigger_event_name;
}



} /* namespace Swagger */

