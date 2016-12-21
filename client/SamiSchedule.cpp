
#include "SamiSchedule.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiSchedule::SamiSchedule() {
    init();
}

SamiSchedule::~SamiSchedule() {
    this->cleanup();
}

void
SamiSchedule::init() {
    pDuration = null;
pDuration_unit = null;
pRepeat = null;
}

void
SamiSchedule::cleanup() {
    if(pDuration != null) {
        
        delete pDuration;
        pDuration = null;
    }
if(pDuration_unit != null) {
        
        delete pDuration_unit;
        pDuration_unit = null;
    }
if(pRepeat != null) {
        
        delete pRepeat;
        pRepeat = null;
    }
}


SamiSchedule*
SamiSchedule::fromJson(String* json) {
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
SamiSchedule::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pDurationKey = new JsonString(L"duration");
        IJsonValue* pDurationVal = null;
        pJsonObject->GetValue(pDurationKey, pDurationVal);
        if(pDurationVal != null) {
            
            pDuration = new Integer();
            jsonToValue(pDuration, pDurationVal, L"Integer", L"Integer");
        }
        delete pDurationKey;
JsonString* pDuration_unitKey = new JsonString(L"duration_unit");
        IJsonValue* pDuration_unitVal = null;
        pJsonObject->GetValue(pDuration_unitKey, pDuration_unitVal);
        if(pDuration_unitVal != null) {
            
            pDuration_unit = new String();
            jsonToValue(pDuration_unit, pDuration_unitVal, L"String", L"String");
        }
        delete pDuration_unitKey;
JsonString* pRepeatKey = new JsonString(L"repeat");
        IJsonValue* pRepeatVal = null;
        pJsonObject->GetValue(pRepeatKey, pRepeatVal);
        if(pRepeatVal != null) {
            
            pRepeat = new String();
            jsonToValue(pRepeat, pRepeatVal, L"String", L"String");
        }
        delete pRepeatKey;
    }
}

SamiSchedule::SamiSchedule(String* json) {
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
SamiSchedule::asJson ()
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
SamiSchedule::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pDurationKey = new JsonString(L"duration");
    pJsonObject->Add(pDurationKey, toJson(getPDuration(), "Integer", ""));

    JsonString *pDuration_unitKey = new JsonString(L"duration_unit");
    pJsonObject->Add(pDuration_unitKey, toJson(getPDurationUnit(), "String", ""));

    JsonString *pRepeatKey = new JsonString(L"repeat");
    pJsonObject->Add(pRepeatKey, toJson(getPRepeat(), "String", ""));

    return pJsonObject;
}

Integer*
SamiSchedule::getPDuration() {
    return pDuration;
}
void
SamiSchedule::setPDuration(Integer* pDuration) {
    this->pDuration = pDuration;
}

String*
SamiSchedule::getPDurationUnit() {
    return pDuration_unit;
}
void
SamiSchedule::setPDurationUnit(String* pDuration_unit) {
    this->pDuration_unit = pDuration_unit;
}

String*
SamiSchedule::getPRepeat() {
    return pRepeat;
}
void
SamiSchedule::setPRepeat(String* pRepeat) {
    this->pRepeat = pRepeat;
}



} /* namespace Swagger */

