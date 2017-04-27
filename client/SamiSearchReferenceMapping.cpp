
#include "SamiSearchReferenceMapping.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiSearchReferenceMapping::SamiSearchReferenceMapping() {
    init();
}

SamiSearchReferenceMapping::~SamiSearchReferenceMapping() {
    this->cleanup();
}

void
SamiSearchReferenceMapping::init() {
    pId = null;
pRef_id_field = null;
pRef_type = null;
pSource_field_to_destination_field = null;
pType = null;
}

void
SamiSearchReferenceMapping::cleanup() {
    if(pId != null) {
        
        delete pId;
        pId = null;
    }
if(pRef_id_field != null) {
        
        delete pRef_id_field;
        pRef_id_field = null;
    }
if(pRef_type != null) {
        
        delete pRef_type;
        pRef_type = null;
    }
if(pSource_field_to_destination_field != null) {
        pSource_field_to_destination_field->RemoveAll(true);
        delete pSource_field_to_destination_field;
        pSource_field_to_destination_field = null;
    }
if(pType != null) {
        
        delete pType;
        pType = null;
    }
}


SamiSearchReferenceMapping*
SamiSearchReferenceMapping::fromJson(String* json) {
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
SamiSearchReferenceMapping::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pIdKey = new JsonString(L"id");
        IJsonValue* pIdVal = null;
        pJsonObject->GetValue(pIdKey, pIdVal);
        if(pIdVal != null) {
            
            pId = new String();
            jsonToValue(pId, pIdVal, L"String", L"String");
        }
        delete pIdKey;
JsonString* pRef_id_fieldKey = new JsonString(L"ref_id_field");
        IJsonValue* pRef_id_fieldVal = null;
        pJsonObject->GetValue(pRef_id_fieldKey, pRef_id_fieldVal);
        if(pRef_id_fieldVal != null) {
            
            pRef_id_field = new String();
            jsonToValue(pRef_id_field, pRef_id_fieldVal, L"String", L"String");
        }
        delete pRef_id_fieldKey;
JsonString* pRef_typeKey = new JsonString(L"ref_type");
        IJsonValue* pRef_typeVal = null;
        pJsonObject->GetValue(pRef_typeKey, pRef_typeVal);
        if(pRef_typeVal != null) {
            
            pRef_type = new String();
            jsonToValue(pRef_type, pRef_typeVal, L"String", L"String");
        }
        delete pRef_typeKey;
JsonString* pSource_field_to_destination_fieldKey = new JsonString(L"source_field_to_destination_field");
        IJsonValue* pSource_field_to_destination_fieldVal = null;
        pJsonObject->GetValue(pSource_field_to_destination_fieldKey, pSource_field_to_destination_fieldVal);
        if(pSource_field_to_destination_fieldVal != null) {
            pSource_field_to_destination_field = new HashMap();
            
            jsonToValue(pSource_field_to_destination_field, pSource_field_to_destination_fieldVal, L"HashMap", L"String");
        }
        delete pSource_field_to_destination_fieldKey;
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

SamiSearchReferenceMapping::SamiSearchReferenceMapping(String* json) {
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
SamiSearchReferenceMapping::asJson ()
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
SamiSearchReferenceMapping::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "String", ""));

    JsonString *pRef_id_fieldKey = new JsonString(L"ref_id_field");
    pJsonObject->Add(pRef_id_fieldKey, toJson(getPRefIdField(), "String", ""));

    JsonString *pRef_typeKey = new JsonString(L"ref_type");
    pJsonObject->Add(pRef_typeKey, toJson(getPRefType(), "String", ""));

    JsonString *pSource_field_to_destination_fieldKey = new JsonString(L"source_field_to_destination_field");
    pJsonObject->Add(pSource_field_to_destination_fieldKey, toJson(getPSourceFieldToDestinationField(), "String", "map"));

    JsonString *pTypeKey = new JsonString(L"type");
    pJsonObject->Add(pTypeKey, toJson(getPType(), "String", ""));

    return pJsonObject;
}

String*
SamiSearchReferenceMapping::getPId() {
    return pId;
}
void
SamiSearchReferenceMapping::setPId(String* pId) {
    this->pId = pId;
}

String*
SamiSearchReferenceMapping::getPRefIdField() {
    return pRef_id_field;
}
void
SamiSearchReferenceMapping::setPRefIdField(String* pRef_id_field) {
    this->pRef_id_field = pRef_id_field;
}

String*
SamiSearchReferenceMapping::getPRefType() {
    return pRef_type;
}
void
SamiSearchReferenceMapping::setPRefType(String* pRef_type) {
    this->pRef_type = pRef_type;
}

HashMap*
SamiSearchReferenceMapping::getPSourceFieldToDestinationField() {
    return pSource_field_to_destination_field;
}
void
SamiSearchReferenceMapping::setPSourceFieldToDestinationField(HashMap* pSource_field_to_destination_field) {
    this->pSource_field_to_destination_field = pSource_field_to_destination_field;
}

String*
SamiSearchReferenceMapping::getPType() {
    return pType;
}
void
SamiSearchReferenceMapping::setPType(String* pType) {
    this->pType = pType;
}



} /* namespace Swagger */

