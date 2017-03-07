
#include "SamiDeltaResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiDeltaResource::SamiDeltaResource() {
    init();
}

SamiDeltaResource::~SamiDeltaResource() {
    this->cleanup();
}

void
SamiDeltaResource::init() {
    pCategory_id = null;
pMedia_type = null;
pQuestion_id = null;
pState = null;
pTags = null;
pUpdated_date = null;
}

void
SamiDeltaResource::cleanup() {
    if(pCategory_id != null) {
        
        delete pCategory_id;
        pCategory_id = null;
    }
if(pMedia_type != null) {
        
        delete pMedia_type;
        pMedia_type = null;
    }
if(pQuestion_id != null) {
        
        delete pQuestion_id;
        pQuestion_id = null;
    }
if(pState != null) {
        
        delete pState;
        pState = null;
    }
if(pTags != null) {
        pTags->RemoveAll(true);
        delete pTags;
        pTags = null;
    }
if(pUpdated_date != null) {
        
        delete pUpdated_date;
        pUpdated_date = null;
    }
}


SamiDeltaResource*
SamiDeltaResource::fromJson(String* json) {
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
SamiDeltaResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pCategory_idKey = new JsonString(L"category_id");
        IJsonValue* pCategory_idVal = null;
        pJsonObject->GetValue(pCategory_idKey, pCategory_idVal);
        if(pCategory_idVal != null) {
            
            pCategory_id = new String();
            jsonToValue(pCategory_id, pCategory_idVal, L"String", L"String");
        }
        delete pCategory_idKey;
JsonString* pMedia_typeKey = new JsonString(L"media_type");
        IJsonValue* pMedia_typeVal = null;
        pJsonObject->GetValue(pMedia_typeKey, pMedia_typeVal);
        if(pMedia_typeVal != null) {
            
            pMedia_type = new String();
            jsonToValue(pMedia_type, pMedia_typeVal, L"String", L"String");
        }
        delete pMedia_typeKey;
JsonString* pQuestion_idKey = new JsonString(L"question_id");
        IJsonValue* pQuestion_idVal = null;
        pJsonObject->GetValue(pQuestion_idKey, pQuestion_idVal);
        if(pQuestion_idVal != null) {
            
            pQuestion_id = new String();
            jsonToValue(pQuestion_id, pQuestion_idVal, L"String", L"String");
        }
        delete pQuestion_idKey;
JsonString* pStateKey = new JsonString(L"state");
        IJsonValue* pStateVal = null;
        pJsonObject->GetValue(pStateKey, pStateVal);
        if(pStateVal != null) {
            
            pState = new String();
            jsonToValue(pState, pStateVal, L"String", L"String");
        }
        delete pStateKey;
JsonString* pTagsKey = new JsonString(L"tags");
        IJsonValue* pTagsVal = null;
        pJsonObject->GetValue(pTagsKey, pTagsVal);
        if(pTagsVal != null) {
            pTags = new ArrayList();
            
            jsonToValue(pTags, pTagsVal, L"IList", L"String");
        }
        delete pTagsKey;
JsonString* pUpdated_dateKey = new JsonString(L"updated_date");
        IJsonValue* pUpdated_dateVal = null;
        pJsonObject->GetValue(pUpdated_dateKey, pUpdated_dateVal);
        if(pUpdated_dateVal != null) {
            
            pUpdated_date = new Long();
            jsonToValue(pUpdated_date, pUpdated_dateVal, L"Long", L"Long");
        }
        delete pUpdated_dateKey;
    }
}

SamiDeltaResource::SamiDeltaResource(String* json) {
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
SamiDeltaResource::asJson ()
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
SamiDeltaResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pCategory_idKey = new JsonString(L"category_id");
    pJsonObject->Add(pCategory_idKey, toJson(getPCategoryId(), "String", ""));

    JsonString *pMedia_typeKey = new JsonString(L"media_type");
    pJsonObject->Add(pMedia_typeKey, toJson(getPMediaType(), "String", ""));

    JsonString *pQuestion_idKey = new JsonString(L"question_id");
    pJsonObject->Add(pQuestion_idKey, toJson(getPQuestionId(), "String", ""));

    JsonString *pStateKey = new JsonString(L"state");
    pJsonObject->Add(pStateKey, toJson(getPState(), "String", ""));

    JsonString *pTagsKey = new JsonString(L"tags");
    pJsonObject->Add(pTagsKey, toJson(getPTags(), "String", "array"));

    JsonString *pUpdated_dateKey = new JsonString(L"updated_date");
    pJsonObject->Add(pUpdated_dateKey, toJson(getPUpdatedDate(), "Long", ""));

    return pJsonObject;
}

String*
SamiDeltaResource::getPCategoryId() {
    return pCategory_id;
}
void
SamiDeltaResource::setPCategoryId(String* pCategory_id) {
    this->pCategory_id = pCategory_id;
}

String*
SamiDeltaResource::getPMediaType() {
    return pMedia_type;
}
void
SamiDeltaResource::setPMediaType(String* pMedia_type) {
    this->pMedia_type = pMedia_type;
}

String*
SamiDeltaResource::getPQuestionId() {
    return pQuestion_id;
}
void
SamiDeltaResource::setPQuestionId(String* pQuestion_id) {
    this->pQuestion_id = pQuestion_id;
}

String*
SamiDeltaResource::getPState() {
    return pState;
}
void
SamiDeltaResource::setPState(String* pState) {
    this->pState = pState;
}

IList*
SamiDeltaResource::getPTags() {
    return pTags;
}
void
SamiDeltaResource::setPTags(IList* pTags) {
    this->pTags = pTags;
}

Long*
SamiDeltaResource::getPUpdatedDate() {
    return pUpdated_date;
}
void
SamiDeltaResource::setPUpdatedDate(Long* pUpdated_date) {
    this->pUpdated_date = pUpdated_date;
}



} /* namespace Swagger */

