
#include "SamiMetricResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiMetricResource::SamiMetricResource() {
    init();
}

SamiMetricResource::~SamiMetricResource() {
    this->cleanup();
}

void
SamiMetricResource::init() {
    pActivity_occurence_id = null;
pName = null;
pTags = null;
pValue = null;
}

void
SamiMetricResource::cleanup() {
    if(pActivity_occurence_id != null) {
        
        delete pActivity_occurence_id;
        pActivity_occurence_id = null;
    }
if(pName != null) {
        
        delete pName;
        pName = null;
    }
if(pTags != null) {
        pTags->RemoveAll(true);
        delete pTags;
        pTags = null;
    }
if(pValue != null) {
        
        delete pValue;
        pValue = null;
    }
}


SamiMetricResource*
SamiMetricResource::fromJson(String* json) {
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
SamiMetricResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pActivity_occurence_idKey = new JsonString(L"activity_occurence_id");
        IJsonValue* pActivity_occurence_idVal = null;
        pJsonObject->GetValue(pActivity_occurence_idKey, pActivity_occurence_idVal);
        if(pActivity_occurence_idVal != null) {
            
            pActivity_occurence_id = new Long();
            jsonToValue(pActivity_occurence_id, pActivity_occurence_idVal, L"Long", L"Long");
        }
        delete pActivity_occurence_idKey;
JsonString* pNameKey = new JsonString(L"name");
        IJsonValue* pNameVal = null;
        pJsonObject->GetValue(pNameKey, pNameVal);
        if(pNameVal != null) {
            
            pName = new String();
            jsonToValue(pName, pNameVal, L"String", L"String");
        }
        delete pNameKey;
JsonString* pTagsKey = new JsonString(L"tags");
        IJsonValue* pTagsVal = null;
        pJsonObject->GetValue(pTagsKey, pTagsVal);
        if(pTagsVal != null) {
            pTags = new ArrayList();
            
            jsonToValue(pTags, pTagsVal, L"IList", L"String");
        }
        delete pTagsKey;
JsonString* pValueKey = new JsonString(L"value");
        IJsonValue* pValueVal = null;
        pJsonObject->GetValue(pValueKey, pValueVal);
        if(pValueVal != null) {
            
            pValue = new Long();
            jsonToValue(pValue, pValueVal, L"Long", L"Long");
        }
        delete pValueKey;
    }
}

SamiMetricResource::SamiMetricResource(String* json) {
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
SamiMetricResource::asJson ()
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
SamiMetricResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pActivity_occurence_idKey = new JsonString(L"activity_occurence_id");
    pJsonObject->Add(pActivity_occurence_idKey, toJson(getPActivityOccurenceId(), "Long", ""));

    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    JsonString *pTagsKey = new JsonString(L"tags");
    pJsonObject->Add(pTagsKey, toJson(getPTags(), "String", "array"));

    JsonString *pValueKey = new JsonString(L"value");
    pJsonObject->Add(pValueKey, toJson(getPValue(), "Long", ""));

    return pJsonObject;
}

Long*
SamiMetricResource::getPActivityOccurenceId() {
    return pActivity_occurence_id;
}
void
SamiMetricResource::setPActivityOccurenceId(Long* pActivity_occurence_id) {
    this->pActivity_occurence_id = pActivity_occurence_id;
}

String*
SamiMetricResource::getPName() {
    return pName;
}
void
SamiMetricResource::setPName(String* pName) {
    this->pName = pName;
}

IList*
SamiMetricResource::getPTags() {
    return pTags;
}
void
SamiMetricResource::setPTags(IList* pTags) {
    this->pTags = pTags;
}

Long*
SamiMetricResource::getPValue() {
    return pValue;
}
void
SamiMetricResource::setPValue(Long* pValue) {
    this->pValue = pValue;
}



} /* namespace Swagger */

