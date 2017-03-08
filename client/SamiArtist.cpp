
#include "SamiArtist.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiArtist::SamiArtist() {
    init();
}

SamiArtist::~SamiArtist() {
    this->cleanup();
}

void
SamiArtist::init() {
    pAdditional_properties = null;
pBorn = null;
pContribution_count = null;
pCreated = null;
pDied = null;
pId = null;
pLong_description = null;
pName = null;
pPriority = null;
pProperties_string = null;
pShort_description = null;
pTemplate = null;
pUpdated = null;
}

void
SamiArtist::cleanup() {
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
if(pCreated != null) {
        
        delete pCreated;
        pCreated = null;
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
if(pProperties_string != null) {
        
        delete pProperties_string;
        pProperties_string = null;
    }
if(pShort_description != null) {
        
        delete pShort_description;
        pShort_description = null;
    }
if(pTemplate != null) {
        
        delete pTemplate;
        pTemplate = null;
    }
if(pUpdated != null) {
        
        delete pUpdated;
        pUpdated = null;
    }
}


SamiArtist*
SamiArtist::fromJson(String* json) {
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
SamiArtist::fromJsonObject(IJsonValue* pJson) {
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
            
            pBorn = new Long();
            jsonToValue(pBorn, pBornVal, L"Long", L"Long");
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
JsonString* pCreatedKey = new JsonString(L"created");
        IJsonValue* pCreatedVal = null;
        pJsonObject->GetValue(pCreatedKey, pCreatedVal);
        if(pCreatedVal != null) {
            
            pCreated = new Long();
            jsonToValue(pCreated, pCreatedVal, L"Long", L"Long");
        }
        delete pCreatedKey;
JsonString* pDiedKey = new JsonString(L"died");
        IJsonValue* pDiedVal = null;
        pJsonObject->GetValue(pDiedKey, pDiedVal);
        if(pDiedVal != null) {
            
            pDied = new Long();
            jsonToValue(pDied, pDiedVal, L"Long", L"Long");
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
JsonString* pProperties_stringKey = new JsonString(L"properties_string");
        IJsonValue* pProperties_stringVal = null;
        pJsonObject->GetValue(pProperties_stringKey, pProperties_stringVal);
        if(pProperties_stringVal != null) {
            
            pProperties_string = new String();
            jsonToValue(pProperties_string, pProperties_stringVal, L"String", L"String");
        }
        delete pProperties_stringKey;
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
JsonString* pUpdatedKey = new JsonString(L"updated");
        IJsonValue* pUpdatedVal = null;
        pJsonObject->GetValue(pUpdatedKey, pUpdatedVal);
        if(pUpdatedVal != null) {
            
            pUpdated = new Long();
            jsonToValue(pUpdated, pUpdatedVal, L"Long", L"Long");
        }
        delete pUpdatedKey;
    }
}

SamiArtist::SamiArtist(String* json) {
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
SamiArtist::asJson ()
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
SamiArtist::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pAdditional_propertiesKey = new JsonString(L"additional_properties");
    pJsonObject->Add(pAdditional_propertiesKey, toJson(getPAdditionalProperties(), "SamiProperty", "map"));

    JsonString *pBornKey = new JsonString(L"born");
    pJsonObject->Add(pBornKey, toJson(getPBorn(), "Long", ""));

    JsonString *pContribution_countKey = new JsonString(L"contribution_count");
    pJsonObject->Add(pContribution_countKey, toJson(getPContributionCount(), "Integer", ""));

    JsonString *pCreatedKey = new JsonString(L"created");
    pJsonObject->Add(pCreatedKey, toJson(getPCreated(), "Long", ""));

    JsonString *pDiedKey = new JsonString(L"died");
    pJsonObject->Add(pDiedKey, toJson(getPDied(), "Long", ""));

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "Long", ""));

    JsonString *pLong_descriptionKey = new JsonString(L"long_description");
    pJsonObject->Add(pLong_descriptionKey, toJson(getPLongDescription(), "String", ""));

    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    JsonString *pPriorityKey = new JsonString(L"priority");
    pJsonObject->Add(pPriorityKey, toJson(getPPriority(), "Integer", ""));

    JsonString *pProperties_stringKey = new JsonString(L"properties_string");
    pJsonObject->Add(pProperties_stringKey, toJson(getPPropertiesString(), "String", ""));

    JsonString *pShort_descriptionKey = new JsonString(L"short_description");
    pJsonObject->Add(pShort_descriptionKey, toJson(getPShortDescription(), "String", ""));

    JsonString *pTemplateKey = new JsonString(L"template");
    pJsonObject->Add(pTemplateKey, toJson(getPTemplate(), "String", ""));

    JsonString *pUpdatedKey = new JsonString(L"updated");
    pJsonObject->Add(pUpdatedKey, toJson(getPUpdated(), "Long", ""));

    return pJsonObject;
}

HashMap*
SamiArtist::getPAdditionalProperties() {
    return pAdditional_properties;
}
void
SamiArtist::setPAdditionalProperties(HashMap* pAdditional_properties) {
    this->pAdditional_properties = pAdditional_properties;
}

Long*
SamiArtist::getPBorn() {
    return pBorn;
}
void
SamiArtist::setPBorn(Long* pBorn) {
    this->pBorn = pBorn;
}

Integer*
SamiArtist::getPContributionCount() {
    return pContribution_count;
}
void
SamiArtist::setPContributionCount(Integer* pContribution_count) {
    this->pContribution_count = pContribution_count;
}

Long*
SamiArtist::getPCreated() {
    return pCreated;
}
void
SamiArtist::setPCreated(Long* pCreated) {
    this->pCreated = pCreated;
}

Long*
SamiArtist::getPDied() {
    return pDied;
}
void
SamiArtist::setPDied(Long* pDied) {
    this->pDied = pDied;
}

Long*
SamiArtist::getPId() {
    return pId;
}
void
SamiArtist::setPId(Long* pId) {
    this->pId = pId;
}

String*
SamiArtist::getPLongDescription() {
    return pLong_description;
}
void
SamiArtist::setPLongDescription(String* pLong_description) {
    this->pLong_description = pLong_description;
}

String*
SamiArtist::getPName() {
    return pName;
}
void
SamiArtist::setPName(String* pName) {
    this->pName = pName;
}

Integer*
SamiArtist::getPPriority() {
    return pPriority;
}
void
SamiArtist::setPPriority(Integer* pPriority) {
    this->pPriority = pPriority;
}

String*
SamiArtist::getPPropertiesString() {
    return pProperties_string;
}
void
SamiArtist::setPPropertiesString(String* pProperties_string) {
    this->pProperties_string = pProperties_string;
}

String*
SamiArtist::getPShortDescription() {
    return pShort_description;
}
void
SamiArtist::setPShortDescription(String* pShort_description) {
    this->pShort_description = pShort_description;
}

String*
SamiArtist::getPTemplate() {
    return pTemplate;
}
void
SamiArtist::setPTemplate(String* pTemplate) {
    this->pTemplate = pTemplate;
}

Long*
SamiArtist::getPUpdated() {
    return pUpdated;
}
void
SamiArtist::setPUpdated(Long* pUpdated) {
    this->pUpdated = pUpdated;
}



} /* namespace Swagger */

