
#include "SamiArtistResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiArtistResource::SamiArtistResource() {
    init();
}

SamiArtistResource::~SamiArtistResource() {
    this->cleanup();
}

void
SamiArtistResource::init() {
    pAdditional_properties = null;
pBorn = null;
pContribution_count = null;
pContributions = null;
pCreated_date = null;
pDied = null;
pId = null;
pLong_description = null;
pName = null;
pPriority = null;
pShort_description = null;
pTemplate = null;
pUpdated_date = null;
}

void
SamiArtistResource::cleanup() {
    if(pAdditional_properties != null) {
        pAdditional_properties->RemoveAll(true);
        delete pAdditional_properties;
        pAdditional_properties = null;
    }
if(pBorn != null) {
        
        delete pBorn;
        pBorn = null;
    }
if(pContribution_count != null) {
        
        delete pContribution_count;
        pContribution_count = null;
    }
if(pContributions != null) {
        pContributions->RemoveAll(true);
        delete pContributions;
        pContributions = null;
    }
if(pCreated_date != null) {
        
        delete pCreated_date;
        pCreated_date = null;
    }
if(pDied != null) {
        
        delete pDied;
        pDied = null;
    }
if(pId != null) {
        
        delete pId;
        pId = null;
    }
if(pLong_description != null) {
        
        delete pLong_description;
        pLong_description = null;
    }
if(pName != null) {
        
        delete pName;
        pName = null;
    }
if(pPriority != null) {
        
        delete pPriority;
        pPriority = null;
    }
if(pShort_description != null) {
        
        delete pShort_description;
        pShort_description = null;
    }
if(pTemplate != null) {
        
        delete pTemplate;
        pTemplate = null;
    }
if(pUpdated_date != null) {
        
        delete pUpdated_date;
        pUpdated_date = null;
    }
}


SamiArtistResource*
SamiArtistResource::fromJson(String* json) {
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
SamiArtistResource::fromJsonObject(IJsonValue* pJson) {
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
JsonString* pBornKey = new JsonString(L"born");
        IJsonValue* pBornVal = null;
        pJsonObject->GetValue(pBornKey, pBornVal);
        if(pBornVal != null) {
            
            pBorn = new String();
            jsonToValue(pBorn, pBornVal, L"String", L"String");
        }
        delete pBornKey;
JsonString* pContribution_countKey = new JsonString(L"contribution_count");
        IJsonValue* pContribution_countVal = null;
        pJsonObject->GetValue(pContribution_countKey, pContribution_countVal);
        if(pContribution_countVal != null) {
            
            pContribution_count = new Integer();
            jsonToValue(pContribution_count, pContribution_countVal, L"Integer", L"Integer");
        }
        delete pContribution_countKey;
JsonString* pContributionsKey = new JsonString(L"contributions");
        IJsonValue* pContributionsVal = null;
        pJsonObject->GetValue(pContributionsKey, pContributionsVal);
        if(pContributionsVal != null) {
            pContributions = new ArrayList();
            
            jsonToValue(pContributions, pContributionsVal, L"IList", L"SamiContributionResource");
        }
        delete pContributionsKey;
JsonString* pCreated_dateKey = new JsonString(L"created_date");
        IJsonValue* pCreated_dateVal = null;
        pJsonObject->GetValue(pCreated_dateKey, pCreated_dateVal);
        if(pCreated_dateVal != null) {
            
            pCreated_date = new Long();
            jsonToValue(pCreated_date, pCreated_dateVal, L"Long", L"Long");
        }
        delete pCreated_dateKey;
JsonString* pDiedKey = new JsonString(L"died");
        IJsonValue* pDiedVal = null;
        pJsonObject->GetValue(pDiedKey, pDiedVal);
        if(pDiedVal != null) {
            
            pDied = new String();
            jsonToValue(pDied, pDiedVal, L"String", L"String");
        }
        delete pDiedKey;
JsonString* pIdKey = new JsonString(L"id");
        IJsonValue* pIdVal = null;
        pJsonObject->GetValue(pIdKey, pIdVal);
        if(pIdVal != null) {
            
            pId = new Long();
            jsonToValue(pId, pIdVal, L"Long", L"Long");
        }
        delete pIdKey;
JsonString* pLong_descriptionKey = new JsonString(L"long_description");
        IJsonValue* pLong_descriptionVal = null;
        pJsonObject->GetValue(pLong_descriptionKey, pLong_descriptionVal);
        if(pLong_descriptionVal != null) {
            
            pLong_description = new String();
            jsonToValue(pLong_description, pLong_descriptionVal, L"String", L"String");
        }
        delete pLong_descriptionKey;
JsonString* pNameKey = new JsonString(L"name");
        IJsonValue* pNameVal = null;
        pJsonObject->GetValue(pNameKey, pNameVal);
        if(pNameVal != null) {
            
            pName = new String();
            jsonToValue(pName, pNameVal, L"String", L"String");
        }
        delete pNameKey;
JsonString* pPriorityKey = new JsonString(L"priority");
        IJsonValue* pPriorityVal = null;
        pJsonObject->GetValue(pPriorityKey, pPriorityVal);
        if(pPriorityVal != null) {
            
            pPriority = new Integer();
            jsonToValue(pPriority, pPriorityVal, L"Integer", L"Integer");
        }
        delete pPriorityKey;
JsonString* pShort_descriptionKey = new JsonString(L"short_description");
        IJsonValue* pShort_descriptionVal = null;
        pJsonObject->GetValue(pShort_descriptionKey, pShort_descriptionVal);
        if(pShort_descriptionVal != null) {
            
            pShort_description = new String();
            jsonToValue(pShort_description, pShort_descriptionVal, L"String", L"String");
        }
        delete pShort_descriptionKey;
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
    }
}

SamiArtistResource::SamiArtistResource(String* json) {
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
SamiArtistResource::asJson ()
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
SamiArtistResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pAdditional_propertiesKey = new JsonString(L"additional_properties");
    pJsonObject->Add(pAdditional_propertiesKey, toJson(getPAdditionalProperties(), "SamiProperty", "map"));

    JsonString *pBornKey = new JsonString(L"born");
    pJsonObject->Add(pBornKey, toJson(getPBorn(), "String", ""));

    JsonString *pContribution_countKey = new JsonString(L"contribution_count");
    pJsonObject->Add(pContribution_countKey, toJson(getPContributionCount(), "Integer", ""));

    JsonString *pContributionsKey = new JsonString(L"contributions");
    pJsonObject->Add(pContributionsKey, toJson(getPContributions(), "SamiContributionResource", "array"));

    JsonString *pCreated_dateKey = new JsonString(L"created_date");
    pJsonObject->Add(pCreated_dateKey, toJson(getPCreatedDate(), "Long", ""));

    JsonString *pDiedKey = new JsonString(L"died");
    pJsonObject->Add(pDiedKey, toJson(getPDied(), "String", ""));

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "Long", ""));

    JsonString *pLong_descriptionKey = new JsonString(L"long_description");
    pJsonObject->Add(pLong_descriptionKey, toJson(getPLongDescription(), "String", ""));

    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    JsonString *pPriorityKey = new JsonString(L"priority");
    pJsonObject->Add(pPriorityKey, toJson(getPPriority(), "Integer", ""));

    JsonString *pShort_descriptionKey = new JsonString(L"short_description");
    pJsonObject->Add(pShort_descriptionKey, toJson(getPShortDescription(), "String", ""));

    JsonString *pTemplateKey = new JsonString(L"template");
    pJsonObject->Add(pTemplateKey, toJson(getPTemplate(), "String", ""));

    JsonString *pUpdated_dateKey = new JsonString(L"updated_date");
    pJsonObject->Add(pUpdated_dateKey, toJson(getPUpdatedDate(), "Long", ""));

    return pJsonObject;
}

HashMap*
SamiArtistResource::getPAdditionalProperties() {
    return pAdditional_properties;
}
void
SamiArtistResource::setPAdditionalProperties(HashMap* pAdditional_properties) {
    this->pAdditional_properties = pAdditional_properties;
}

String*
SamiArtistResource::getPBorn() {
    return pBorn;
}
void
SamiArtistResource::setPBorn(String* pBorn) {
    this->pBorn = pBorn;
}

Integer*
SamiArtistResource::getPContributionCount() {
    return pContribution_count;
}
void
SamiArtistResource::setPContributionCount(Integer* pContribution_count) {
    this->pContribution_count = pContribution_count;
}

IList*
SamiArtistResource::getPContributions() {
    return pContributions;
}
void
SamiArtistResource::setPContributions(IList* pContributions) {
    this->pContributions = pContributions;
}

Long*
SamiArtistResource::getPCreatedDate() {
    return pCreated_date;
}
void
SamiArtistResource::setPCreatedDate(Long* pCreated_date) {
    this->pCreated_date = pCreated_date;
}

String*
SamiArtistResource::getPDied() {
    return pDied;
}
void
SamiArtistResource::setPDied(String* pDied) {
    this->pDied = pDied;
}

Long*
SamiArtistResource::getPId() {
    return pId;
}
void
SamiArtistResource::setPId(Long* pId) {
    this->pId = pId;
}

String*
SamiArtistResource::getPLongDescription() {
    return pLong_description;
}
void
SamiArtistResource::setPLongDescription(String* pLong_description) {
    this->pLong_description = pLong_description;
}

String*
SamiArtistResource::getPName() {
    return pName;
}
void
SamiArtistResource::setPName(String* pName) {
    this->pName = pName;
}

Integer*
SamiArtistResource::getPPriority() {
    return pPriority;
}
void
SamiArtistResource::setPPriority(Integer* pPriority) {
    this->pPriority = pPriority;
}

String*
SamiArtistResource::getPShortDescription() {
    return pShort_description;
}
void
SamiArtistResource::setPShortDescription(String* pShort_description) {
    this->pShort_description = pShort_description;
}

String*
SamiArtistResource::getPTemplate() {
    return pTemplate;
}
void
SamiArtistResource::setPTemplate(String* pTemplate) {
    this->pTemplate = pTemplate;
}

Long*
SamiArtistResource::getPUpdatedDate() {
    return pUpdated_date;
}
void
SamiArtistResource::setPUpdatedDate(Long* pUpdated_date) {
    this->pUpdated_date = pUpdated_date;
}



} /* namespace Swagger */

