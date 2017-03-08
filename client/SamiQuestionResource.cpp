
#include "SamiQuestionResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiQuestionResource::SamiQuestionResource() {
    init();
}

SamiQuestionResource::~SamiQuestionResource() {
    this->cleanup();
}

void
SamiQuestionResource::init() {
    pAdditional_properties = null;
pAnswers = null;
pCategory = null;
pCreated_date = null;
pDifficulty = null;
pId = null;
pImport_id = null;
pPublished_date = null;
pQuestion = null;
pSource1 = null;
pSource2 = null;
pTags = null;
pTemplate = null;
pUpdated_date = null;
pVendor = null;
}

void
SamiQuestionResource::cleanup() {
    if(pAdditional_properties != null) {
        pAdditional_properties->RemoveAll(true);
        delete pAdditional_properties;
        pAdditional_properties = null;
    }
if(pAnswers != null) {
        pAnswers->RemoveAll(true);
        delete pAnswers;
        pAnswers = null;
    }
if(pCategory != null) {
        
        delete pCategory;
        pCategory = null;
    }
if(pCreated_date != null) {
        
        delete pCreated_date;
        pCreated_date = null;
    }
if(pDifficulty != null) {
        
        delete pDifficulty;
        pDifficulty = null;
    }
if(pId != null) {
        
        delete pId;
        pId = null;
    }
if(pImport_id != null) {
        
        delete pImport_id;
        pImport_id = null;
    }
if(pPublished_date != null) {
        
        delete pPublished_date;
        pPublished_date = null;
    }
if(pQuestion != null) {
        
        delete pQuestion;
        pQuestion = null;
    }
if(pSource1 != null) {
        
        delete pSource1;
        pSource1 = null;
    }
if(pSource2 != null) {
        
        delete pSource2;
        pSource2 = null;
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
if(pUpdated_date != null) {
        
        delete pUpdated_date;
        pUpdated_date = null;
    }
if(pVendor != null) {
        
        delete pVendor;
        pVendor = null;
    }
}


SamiQuestionResource*
SamiQuestionResource::fromJson(String* json) {
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
SamiQuestionResource::fromJsonObject(IJsonValue* pJson) {
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
JsonString* pAnswersKey = new JsonString(L"answers");
        IJsonValue* pAnswersVal = null;
        pJsonObject->GetValue(pAnswersKey, pAnswersVal);
        if(pAnswersVal != null) {
            pAnswers = new ArrayList();
            
            jsonToValue(pAnswers, pAnswersVal, L"IList", L"SamiAnswerResource");
        }
        delete pAnswersKey;
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
JsonString* pDifficultyKey = new JsonString(L"difficulty");
        IJsonValue* pDifficultyVal = null;
        pJsonObject->GetValue(pDifficultyKey, pDifficultyVal);
        if(pDifficultyVal != null) {
            
            pDifficulty = new Integer();
            jsonToValue(pDifficulty, pDifficultyVal, L"Integer", L"Integer");
        }
        delete pDifficultyKey;
JsonString* pIdKey = new JsonString(L"id");
        IJsonValue* pIdVal = null;
        pJsonObject->GetValue(pIdKey, pIdVal);
        if(pIdVal != null) {
            
            pId = new String();
            jsonToValue(pId, pIdVal, L"String", L"String");
        }
        delete pIdKey;
JsonString* pImport_idKey = new JsonString(L"import_id");
        IJsonValue* pImport_idVal = null;
        pJsonObject->GetValue(pImport_idKey, pImport_idVal);
        if(pImport_idVal != null) {
            
            pImport_id = new Long();
            jsonToValue(pImport_id, pImport_idVal, L"Long", L"Long");
        }
        delete pImport_idKey;
JsonString* pPublished_dateKey = new JsonString(L"published_date");
        IJsonValue* pPublished_dateVal = null;
        pJsonObject->GetValue(pPublished_dateKey, pPublished_dateVal);
        if(pPublished_dateVal != null) {
            
            pPublished_date = new Long();
            jsonToValue(pPublished_date, pPublished_dateVal, L"Long", L"Long");
        }
        delete pPublished_dateKey;
JsonString* pQuestionKey = new JsonString(L"question");
        IJsonValue* pQuestionVal = null;
        pJsonObject->GetValue(pQuestionKey, pQuestionVal);
        if(pQuestionVal != null) {
            
            pQuestion = new SamiProperty();
            jsonToValue(pQuestion, pQuestionVal, L"SamiProperty", L"SamiProperty");
        }
        delete pQuestionKey;
JsonString* pSource1Key = new JsonString(L"source1");
        IJsonValue* pSource1Val = null;
        pJsonObject->GetValue(pSource1Key, pSource1Val);
        if(pSource1Val != null) {
            
            pSource1 = new String();
            jsonToValue(pSource1, pSource1Val, L"String", L"String");
        }
        delete pSource1Key;
JsonString* pSource2Key = new JsonString(L"source2");
        IJsonValue* pSource2Val = null;
        pJsonObject->GetValue(pSource2Key, pSource2Val);
        if(pSource2Val != null) {
            
            pSource2 = new String();
            jsonToValue(pSource2, pSource2Val, L"String", L"String");
        }
        delete pSource2Key;
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
JsonString* pUpdated_dateKey = new JsonString(L"updated_date");
        IJsonValue* pUpdated_dateVal = null;
        pJsonObject->GetValue(pUpdated_dateKey, pUpdated_dateVal);
        if(pUpdated_dateVal != null) {
            
            pUpdated_date = new Long();
            jsonToValue(pUpdated_date, pUpdated_dateVal, L"Long", L"Long");
        }
        delete pUpdated_dateKey;
JsonString* pVendorKey = new JsonString(L"vendor");
        IJsonValue* pVendorVal = null;
        pJsonObject->GetValue(pVendorKey, pVendorVal);
        if(pVendorVal != null) {
            
            pVendor = new String();
            jsonToValue(pVendor, pVendorVal, L"String", L"String");
        }
        delete pVendorKey;
    }
}

SamiQuestionResource::SamiQuestionResource(String* json) {
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
SamiQuestionResource::asJson ()
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
SamiQuestionResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pAdditional_propertiesKey = new JsonString(L"additional_properties");
    pJsonObject->Add(pAdditional_propertiesKey, toJson(getPAdditionalProperties(), "SamiProperty", "map"));

    JsonString *pAnswersKey = new JsonString(L"answers");
    pJsonObject->Add(pAnswersKey, toJson(getPAnswers(), "SamiAnswerResource", "array"));

    JsonString *pCategoryKey = new JsonString(L"category");
    pJsonObject->Add(pCategoryKey, toJson(getPCategory(), "SamiNestedCategory", ""));

    JsonString *pCreated_dateKey = new JsonString(L"created_date");
    pJsonObject->Add(pCreated_dateKey, toJson(getPCreatedDate(), "Long", ""));

    JsonString *pDifficultyKey = new JsonString(L"difficulty");
    pJsonObject->Add(pDifficultyKey, toJson(getPDifficulty(), "Integer", ""));

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "String", ""));

    JsonString *pImport_idKey = new JsonString(L"import_id");
    pJsonObject->Add(pImport_idKey, toJson(getPImportId(), "Long", ""));

    JsonString *pPublished_dateKey = new JsonString(L"published_date");
    pJsonObject->Add(pPublished_dateKey, toJson(getPPublishedDate(), "Long", ""));

    JsonString *pQuestionKey = new JsonString(L"question");
    pJsonObject->Add(pQuestionKey, toJson(getPQuestion(), "SamiProperty", ""));

    JsonString *pSource1Key = new JsonString(L"source1");
    pJsonObject->Add(pSource1Key, toJson(getPSource1(), "String", ""));

    JsonString *pSource2Key = new JsonString(L"source2");
    pJsonObject->Add(pSource2Key, toJson(getPSource2(), "String", ""));

    JsonString *pTagsKey = new JsonString(L"tags");
    pJsonObject->Add(pTagsKey, toJson(getPTags(), "String", "array"));

    JsonString *pTemplateKey = new JsonString(L"template");
    pJsonObject->Add(pTemplateKey, toJson(getPTemplate(), "String", ""));

    JsonString *pUpdated_dateKey = new JsonString(L"updated_date");
    pJsonObject->Add(pUpdated_dateKey, toJson(getPUpdatedDate(), "Long", ""));

    JsonString *pVendorKey = new JsonString(L"vendor");
    pJsonObject->Add(pVendorKey, toJson(getPVendor(), "String", ""));

    return pJsonObject;
}

HashMap*
SamiQuestionResource::getPAdditionalProperties() {
    return pAdditional_properties;
}
void
SamiQuestionResource::setPAdditionalProperties(HashMap* pAdditional_properties) {
    this->pAdditional_properties = pAdditional_properties;
}

IList*
SamiQuestionResource::getPAnswers() {
    return pAnswers;
}
void
SamiQuestionResource::setPAnswers(IList* pAnswers) {
    this->pAnswers = pAnswers;
}

SamiNestedCategory*
SamiQuestionResource::getPCategory() {
    return pCategory;
}
void
SamiQuestionResource::setPCategory(SamiNestedCategory* pCategory) {
    this->pCategory = pCategory;
}

Long*
SamiQuestionResource::getPCreatedDate() {
    return pCreated_date;
}
void
SamiQuestionResource::setPCreatedDate(Long* pCreated_date) {
    this->pCreated_date = pCreated_date;
}

Integer*
SamiQuestionResource::getPDifficulty() {
    return pDifficulty;
}
void
SamiQuestionResource::setPDifficulty(Integer* pDifficulty) {
    this->pDifficulty = pDifficulty;
}

String*
SamiQuestionResource::getPId() {
    return pId;
}
void
SamiQuestionResource::setPId(String* pId) {
    this->pId = pId;
}

Long*
SamiQuestionResource::getPImportId() {
    return pImport_id;
}
void
SamiQuestionResource::setPImportId(Long* pImport_id) {
    this->pImport_id = pImport_id;
}

Long*
SamiQuestionResource::getPPublishedDate() {
    return pPublished_date;
}
void
SamiQuestionResource::setPPublishedDate(Long* pPublished_date) {
    this->pPublished_date = pPublished_date;
}

SamiProperty*
SamiQuestionResource::getPQuestion() {
    return pQuestion;
}
void
SamiQuestionResource::setPQuestion(SamiProperty* pQuestion) {
    this->pQuestion = pQuestion;
}

String*
SamiQuestionResource::getPSource1() {
    return pSource1;
}
void
SamiQuestionResource::setPSource1(String* pSource1) {
    this->pSource1 = pSource1;
}

String*
SamiQuestionResource::getPSource2() {
    return pSource2;
}
void
SamiQuestionResource::setPSource2(String* pSource2) {
    this->pSource2 = pSource2;
}

IList*
SamiQuestionResource::getPTags() {
    return pTags;
}
void
SamiQuestionResource::setPTags(IList* pTags) {
    this->pTags = pTags;
}

String*
SamiQuestionResource::getPTemplate() {
    return pTemplate;
}
void
SamiQuestionResource::setPTemplate(String* pTemplate) {
    this->pTemplate = pTemplate;
}

Long*
SamiQuestionResource::getPUpdatedDate() {
    return pUpdated_date;
}
void
SamiQuestionResource::setPUpdatedDate(Long* pUpdated_date) {
    this->pUpdated_date = pUpdated_date;
}

String*
SamiQuestionResource::getPVendor() {
    return pVendor;
}
void
SamiQuestionResource::setPVendor(String* pVendor) {
    this->pVendor = pVendor;
}



} /* namespace Swagger */

