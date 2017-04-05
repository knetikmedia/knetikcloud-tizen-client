
#include "SamiArticleResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiArticleResource::SamiArticleResource() {
    init();
}

SamiArticleResource::~SamiArticleResource() {
    this->cleanup();
}

void
SamiArticleResource::init() {
    pActive = null;
pAdditional_properties = null;
pBody = null;
pCategory = null;
pCreated_date = null;
pId = null;
pTags = null;
pTemplate = null;
pTitle = null;
pUpdated_date = null;
}

void
SamiArticleResource::cleanup() {
    if(pActive != null) {
        
        delete pActive;
        pActive = null;
    }
if(pAdditional_properties != null) {
        pAdditional_properties->RemoveAll(true);
        delete pAdditional_properties;
        pAdditional_properties = null;
    }
if(pBody != null) {
        
        delete pBody;
        pBody = null;
    }
if(pCategory != null) {
        
        delete pCategory;
        pCategory = null;
    }
if(pCreated_date != null) {
        
        delete pCreated_date;
        pCreated_date = null;
    }
if(pId != null) {
        
        delete pId;
        pId = null;
    }
if(pTags != null) {
        pTags->RemoveAll(true);
        delete pTags;
        pTags = null;
    }
if(pTemplate != null) {
        
        delete pTemplate;
        pTemplate = null;
    }
if(pTitle != null) {
        
        delete pTitle;
        pTitle = null;
    }
if(pUpdated_date != null) {
        
        delete pUpdated_date;
        pUpdated_date = null;
    }
}


SamiArticleResource*
SamiArticleResource::fromJson(String* json) {
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
SamiArticleResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pActiveKey = new JsonString(L"active");
        IJsonValue* pActiveVal = null;
        pJsonObject->GetValue(pActiveKey, pActiveVal);
        if(pActiveVal != null) {
            
            pActive = new Boolean(false);
            jsonToValue(pActive, pActiveVal, L"Boolean", L"Boolean");
        }
        delete pActiveKey;
JsonString* pAdditional_propertiesKey = new JsonString(L"additional_properties");
        IJsonValue* pAdditional_propertiesVal = null;
        pJsonObject->GetValue(pAdditional_propertiesKey, pAdditional_propertiesVal);
        if(pAdditional_propertiesVal != null) {
            pAdditional_properties = new HashMap();
            
            jsonToValue(pAdditional_properties, pAdditional_propertiesVal, L"HashMap", L"SamiProperty");
        }
        delete pAdditional_propertiesKey;
JsonString* pBodyKey = new JsonString(L"body");
        IJsonValue* pBodyVal = null;
        pJsonObject->GetValue(pBodyKey, pBodyVal);
        if(pBodyVal != null) {
            
            pBody = new String();
            jsonToValue(pBody, pBodyVal, L"String", L"String");
        }
        delete pBodyKey;
JsonString* pCategoryKey = new JsonString(L"category");
        IJsonValue* pCategoryVal = null;
        pJsonObject->GetValue(pCategoryKey, pCategoryVal);
        if(pCategoryVal != null) {
            
            pCategory = new SamiNestedCategory();
            jsonToValue(pCategory, pCategoryVal, L"SamiNestedCategory", L"SamiNestedCategory");
        }
        delete pCategoryKey;
JsonString* pCreated_dateKey = new JsonString(L"created_date");
        IJsonValue* pCreated_dateVal = null;
        pJsonObject->GetValue(pCreated_dateKey, pCreated_dateVal);
        if(pCreated_dateVal != null) {
            
            pCreated_date = new Long();
            jsonToValue(pCreated_date, pCreated_dateVal, L"Long", L"Long");
        }
        delete pCreated_dateKey;
JsonString* pIdKey = new JsonString(L"id");
        IJsonValue* pIdVal = null;
        pJsonObject->GetValue(pIdKey, pIdVal);
        if(pIdVal != null) {
            
            pId = new String();
            jsonToValue(pId, pIdVal, L"String", L"String");
        }
        delete pIdKey;
JsonString* pTagsKey = new JsonString(L"tags");
        IJsonValue* pTagsVal = null;
        pJsonObject->GetValue(pTagsKey, pTagsVal);
        if(pTagsVal != null) {
            pTags = new ArrayList();
            
            jsonToValue(pTags, pTagsVal, L"IList", L"String");
        }
        delete pTagsKey;
JsonString* pTemplateKey = new JsonString(L"template");
        IJsonValue* pTemplateVal = null;
        pJsonObject->GetValue(pTemplateKey, pTemplateVal);
        if(pTemplateVal != null) {
            
            pTemplate = new String();
            jsonToValue(pTemplate, pTemplateVal, L"String", L"String");
        }
        delete pTemplateKey;
JsonString* pTitleKey = new JsonString(L"title");
        IJsonValue* pTitleVal = null;
        pJsonObject->GetValue(pTitleKey, pTitleVal);
        if(pTitleVal != null) {
            
            pTitle = new String();
            jsonToValue(pTitle, pTitleVal, L"String", L"String");
        }
        delete pTitleKey;
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

SamiArticleResource::SamiArticleResource(String* json) {
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
SamiArticleResource::asJson ()
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
SamiArticleResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pActiveKey = new JsonString(L"active");
    pJsonObject->Add(pActiveKey, toJson(getPActive(), "Boolean", ""));

    JsonString *pAdditional_propertiesKey = new JsonString(L"additional_properties");
    pJsonObject->Add(pAdditional_propertiesKey, toJson(getPAdditionalProperties(), "SamiProperty", "map"));

    JsonString *pBodyKey = new JsonString(L"body");
    pJsonObject->Add(pBodyKey, toJson(getPBody(), "String", ""));

    JsonString *pCategoryKey = new JsonString(L"category");
    pJsonObject->Add(pCategoryKey, toJson(getPCategory(), "SamiNestedCategory", ""));

    JsonString *pCreated_dateKey = new JsonString(L"created_date");
    pJsonObject->Add(pCreated_dateKey, toJson(getPCreatedDate(), "Long", ""));

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "String", ""));

    JsonString *pTagsKey = new JsonString(L"tags");
    pJsonObject->Add(pTagsKey, toJson(getPTags(), "String", "array"));

    JsonString *pTemplateKey = new JsonString(L"template");
    pJsonObject->Add(pTemplateKey, toJson(getPTemplate(), "String", ""));

    JsonString *pTitleKey = new JsonString(L"title");
    pJsonObject->Add(pTitleKey, toJson(getPTitle(), "String", ""));

    JsonString *pUpdated_dateKey = new JsonString(L"updated_date");
    pJsonObject->Add(pUpdated_dateKey, toJson(getPUpdatedDate(), "Long", ""));

    return pJsonObject;
}

Boolean*
SamiArticleResource::getPActive() {
    return pActive;
}
void
SamiArticleResource::setPActive(Boolean* pActive) {
    this->pActive = pActive;
}

HashMap*
SamiArticleResource::getPAdditionalProperties() {
    return pAdditional_properties;
}
void
SamiArticleResource::setPAdditionalProperties(HashMap* pAdditional_properties) {
    this->pAdditional_properties = pAdditional_properties;
}

String*
SamiArticleResource::getPBody() {
    return pBody;
}
void
SamiArticleResource::setPBody(String* pBody) {
    this->pBody = pBody;
}

SamiNestedCategory*
SamiArticleResource::getPCategory() {
    return pCategory;
}
void
SamiArticleResource::setPCategory(SamiNestedCategory* pCategory) {
    this->pCategory = pCategory;
}

Long*
SamiArticleResource::getPCreatedDate() {
    return pCreated_date;
}
void
SamiArticleResource::setPCreatedDate(Long* pCreated_date) {
    this->pCreated_date = pCreated_date;
}

String*
SamiArticleResource::getPId() {
    return pId;
}
void
SamiArticleResource::setPId(String* pId) {
    this->pId = pId;
}

IList*
SamiArticleResource::getPTags() {
    return pTags;
}
void
SamiArticleResource::setPTags(IList* pTags) {
    this->pTags = pTags;
}

String*
SamiArticleResource::getPTemplate() {
    return pTemplate;
}
void
SamiArticleResource::setPTemplate(String* pTemplate) {
    this->pTemplate = pTemplate;
}

String*
SamiArticleResource::getPTitle() {
    return pTitle;
}
void
SamiArticleResource::setPTitle(String* pTitle) {
    this->pTitle = pTitle;
}

Long*
SamiArticleResource::getPUpdatedDate() {
    return pUpdated_date;
}
void
SamiArticleResource::setPUpdatedDate(Long* pUpdated_date) {
    this->pUpdated_date = pUpdated_date;
}



} /* namespace Swagger */

