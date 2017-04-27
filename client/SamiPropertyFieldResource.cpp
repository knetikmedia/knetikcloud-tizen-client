
#include "SamiPropertyFieldResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiPropertyFieldResource::SamiPropertyFieldResource() {
    init();
}

SamiPropertyFieldResource::~SamiPropertyFieldResource() {
    this->cleanup();
}

void
SamiPropertyFieldResource::init() {
    pDescription = null;
pInner_type = null;
pInner_type_fields = null;
pName = null;
pRequired = null;
pType = null;
pValid_values = null;
}

void
SamiPropertyFieldResource::cleanup() {
    if(pDescription != null) {
        
        delete pDescription;
        pDescription = null;
    }
if(pInner_type != null) {
        
        delete pInner_type;
        pInner_type = null;
    }
if(pInner_type_fields != null) {
        pInner_type_fields->RemoveAll(true);
        delete pInner_type_fields;
        pInner_type_fields = null;
    }
if(pName != null) {
        
        delete pName;
        pName = null;
    }
if(pRequired != null) {
        
        delete pRequired;
        pRequired = null;
    }
if(pType != null) {
        
        delete pType;
        pType = null;
    }
if(pValid_values != null) {
        pValid_values->RemoveAll(true);
        delete pValid_values;
        pValid_values = null;
    }
}


SamiPropertyFieldResource*
SamiPropertyFieldResource::fromJson(String* json) {
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
SamiPropertyFieldResource::fromJsonObject(IJsonValue* pJson) {
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
JsonString* pInner_typeKey = new JsonString(L"inner_type");
        IJsonValue* pInner_typeVal = null;
        pJsonObject->GetValue(pInner_typeKey, pInner_typeVal);
        if(pInner_typeVal != null) {
            
            pInner_type = new String();
            jsonToValue(pInner_type, pInner_typeVal, L"String", L"String");
        }
        delete pInner_typeKey;
JsonString* pInner_type_fieldsKey = new JsonString(L"inner_type_fields");
        IJsonValue* pInner_type_fieldsVal = null;
        pJsonObject->GetValue(pInner_type_fieldsKey, pInner_type_fieldsVal);
        if(pInner_type_fieldsVal != null) {
            pInner_type_fields = new ArrayList();
            
            jsonToValue(pInner_type_fields, pInner_type_fieldsVal, L"IList", L"SamiPropertyFieldResource");
        }
        delete pInner_type_fieldsKey;
JsonString* pNameKey = new JsonString(L"name");
        IJsonValue* pNameVal = null;
        pJsonObject->GetValue(pNameKey, pNameVal);
        if(pNameVal != null) {
            
            pName = new String();
            jsonToValue(pName, pNameVal, L"String", L"String");
        }
        delete pNameKey;
JsonString* pRequiredKey = new JsonString(L"required");
        IJsonValue* pRequiredVal = null;
        pJsonObject->GetValue(pRequiredKey, pRequiredVal);
        if(pRequiredVal != null) {
            
            pRequired = new Boolean(false);
            jsonToValue(pRequired, pRequiredVal, L"Boolean", L"Boolean");
        }
        delete pRequiredKey;
JsonString* pTypeKey = new JsonString(L"type");
        IJsonValue* pTypeVal = null;
        pJsonObject->GetValue(pTypeKey, pTypeVal);
        if(pTypeVal != null) {
            
            pType = new String();
            jsonToValue(pType, pTypeVal, L"String", L"String");
        }
        delete pTypeKey;
JsonString* pValid_valuesKey = new JsonString(L"valid_values");
        IJsonValue* pValid_valuesVal = null;
        pJsonObject->GetValue(pValid_valuesKey, pValid_valuesVal);
        if(pValid_valuesVal != null) {
            pValid_values = new ArrayList();
            
            jsonToValue(pValid_values, pValid_valuesVal, L"IList", L"String");
        }
        delete pValid_valuesKey;
    }
}

SamiPropertyFieldResource::SamiPropertyFieldResource(String* json) {
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
SamiPropertyFieldResource::asJson ()
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
SamiPropertyFieldResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pDescriptionKey = new JsonString(L"description");
    pJsonObject->Add(pDescriptionKey, toJson(getPDescription(), "String", ""));

    JsonString *pInner_typeKey = new JsonString(L"inner_type");
    pJsonObject->Add(pInner_typeKey, toJson(getPInnerType(), "String", ""));

    JsonString *pInner_type_fieldsKey = new JsonString(L"inner_type_fields");
    pJsonObject->Add(pInner_type_fieldsKey, toJson(getPInnerTypeFields(), "SamiPropertyFieldResource", "array"));

    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    JsonString *pRequiredKey = new JsonString(L"required");
    pJsonObject->Add(pRequiredKey, toJson(getPRequired(), "Boolean", ""));

    JsonString *pTypeKey = new JsonString(L"type");
    pJsonObject->Add(pTypeKey, toJson(getPType(), "String", ""));

    JsonString *pValid_valuesKey = new JsonString(L"valid_values");
    pJsonObject->Add(pValid_valuesKey, toJson(getPValidValues(), "String", "array"));

    return pJsonObject;
}

String*
SamiPropertyFieldResource::getPDescription() {
    return pDescription;
}
void
SamiPropertyFieldResource::setPDescription(String* pDescription) {
    this->pDescription = pDescription;
}

String*
SamiPropertyFieldResource::getPInnerType() {
    return pInner_type;
}
void
SamiPropertyFieldResource::setPInnerType(String* pInner_type) {
    this->pInner_type = pInner_type;
}

IList*
SamiPropertyFieldResource::getPInnerTypeFields() {
    return pInner_type_fields;
}
void
SamiPropertyFieldResource::setPInnerTypeFields(IList* pInner_type_fields) {
    this->pInner_type_fields = pInner_type_fields;
}

String*
SamiPropertyFieldResource::getPName() {
    return pName;
}
void
SamiPropertyFieldResource::setPName(String* pName) {
    this->pName = pName;
}

Boolean*
SamiPropertyFieldResource::getPRequired() {
    return pRequired;
}
void
SamiPropertyFieldResource::setPRequired(Boolean* pRequired) {
    this->pRequired = pRequired;
}

String*
SamiPropertyFieldResource::getPType() {
    return pType;
}
void
SamiPropertyFieldResource::setPType(String* pType) {
    this->pType = pType;
}

IList*
SamiPropertyFieldResource::getPValidValues() {
    return pValid_values;
}
void
SamiPropertyFieldResource::setPValidValues(IList* pValid_values) {
    this->pValid_values = pValid_values;
}



} /* namespace Swagger */

