
#include "SamiPropertyFieldListResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiPropertyFieldListResource::SamiPropertyFieldListResource() {
    init();
}

SamiPropertyFieldListResource::~SamiPropertyFieldListResource() {
    this->cleanup();
}

void
SamiPropertyFieldListResource::init() {
    pProperty_definition_fields = null;
pProperty_fields = null;
pProperty_type = null;
}

void
SamiPropertyFieldListResource::cleanup() {
    if(pProperty_definition_fields != null) {
        pProperty_definition_fields->RemoveAll(true);
        delete pProperty_definition_fields;
        pProperty_definition_fields = null;
    }
if(pProperty_fields != null) {
        pProperty_fields->RemoveAll(true);
        delete pProperty_fields;
        pProperty_fields = null;
    }
if(pProperty_type != null) {
        
        delete pProperty_type;
        pProperty_type = null;
    }
}


SamiPropertyFieldListResource*
SamiPropertyFieldListResource::fromJson(String* json) {
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
SamiPropertyFieldListResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pProperty_definition_fieldsKey = new JsonString(L"property_definition_fields");
        IJsonValue* pProperty_definition_fieldsVal = null;
        pJsonObject->GetValue(pProperty_definition_fieldsKey, pProperty_definition_fieldsVal);
        if(pProperty_definition_fieldsVal != null) {
            pProperty_definition_fields = new ArrayList();
            
            jsonToValue(pProperty_definition_fields, pProperty_definition_fieldsVal, L"IList", L"SamiPropertyFieldResource");
        }
        delete pProperty_definition_fieldsKey;
JsonString* pProperty_fieldsKey = new JsonString(L"property_fields");
        IJsonValue* pProperty_fieldsVal = null;
        pJsonObject->GetValue(pProperty_fieldsKey, pProperty_fieldsVal);
        if(pProperty_fieldsVal != null) {
            pProperty_fields = new ArrayList();
            
            jsonToValue(pProperty_fields, pProperty_fieldsVal, L"IList", L"SamiPropertyFieldResource");
        }
        delete pProperty_fieldsKey;
JsonString* pProperty_typeKey = new JsonString(L"property_type");
        IJsonValue* pProperty_typeVal = null;
        pJsonObject->GetValue(pProperty_typeKey, pProperty_typeVal);
        if(pProperty_typeVal != null) {
            
            pProperty_type = new String();
            jsonToValue(pProperty_type, pProperty_typeVal, L"String", L"String");
        }
        delete pProperty_typeKey;
    }
}

SamiPropertyFieldListResource::SamiPropertyFieldListResource(String* json) {
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
SamiPropertyFieldListResource::asJson ()
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
SamiPropertyFieldListResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pProperty_definition_fieldsKey = new JsonString(L"property_definition_fields");
    pJsonObject->Add(pProperty_definition_fieldsKey, toJson(getPPropertyDefinitionFields(), "SamiPropertyFieldResource", "array"));

    JsonString *pProperty_fieldsKey = new JsonString(L"property_fields");
    pJsonObject->Add(pProperty_fieldsKey, toJson(getPPropertyFields(), "SamiPropertyFieldResource", "array"));

    JsonString *pProperty_typeKey = new JsonString(L"property_type");
    pJsonObject->Add(pProperty_typeKey, toJson(getPPropertyType(), "String", ""));

    return pJsonObject;
}

IList*
SamiPropertyFieldListResource::getPPropertyDefinitionFields() {
    return pProperty_definition_fields;
}
void
SamiPropertyFieldListResource::setPPropertyDefinitionFields(IList* pProperty_definition_fields) {
    this->pProperty_definition_fields = pProperty_definition_fields;
}

IList*
SamiPropertyFieldListResource::getPPropertyFields() {
    return pProperty_fields;
}
void
SamiPropertyFieldListResource::setPPropertyFields(IList* pProperty_fields) {
    this->pProperty_fields = pProperty_fields;
}

String*
SamiPropertyFieldListResource::getPPropertyType() {
    return pProperty_type;
}
void
SamiPropertyFieldListResource::setPPropertyType(String* pProperty_type) {
    this->pProperty_type = pProperty_type;
}



} /* namespace Swagger */

