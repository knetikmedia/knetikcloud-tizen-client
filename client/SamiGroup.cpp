
#include "SamiGroup.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiGroup::SamiGroup() {
    init();
}

SamiGroup::~SamiGroup() {
    this->cleanup();
}

void
SamiGroup::init() {
    pAdditional_properties = null;
pDescription = null;
pId = null;
pMember_count = null;
pMessage_of_the_day = null;
pName = null;
pParent = null;
pProperties_string = null;
pStatus = null;
pSub_member_count = null;
pTemplate = null;
pUnique_name = null;
}

void
SamiGroup::cleanup() {
    if(pAdditional_properties != null) {
        pAdditional_properties->RemoveAll(true);
        delete pAdditional_properties;
        pAdditional_properties = null;
    }
if(pDescription != null) {
        
        delete pDescription;
        pDescription = null;
    }
if(pId != null) {
        
        delete pId;
        pId = null;
    }
if(pMember_count != null) {
        
        delete pMember_count;
        pMember_count = null;
    }
if(pMessage_of_the_day != null) {
        
        delete pMessage_of_the_day;
        pMessage_of_the_day = null;
    }
if(pName != null) {
        
        delete pName;
        pName = null;
    }
if(pParent != null) {
        
        delete pParent;
        pParent = null;
    }
if(pProperties_string != null) {
        
        delete pProperties_string;
        pProperties_string = null;
    }
if(pStatus != null) {
        
        delete pStatus;
        pStatus = null;
    }
if(pSub_member_count != null) {
        
        delete pSub_member_count;
        pSub_member_count = null;
    }
if(pTemplate != null) {
        
        delete pTemplate;
        pTemplate = null;
    }
if(pUnique_name != null) {
        
        delete pUnique_name;
        pUnique_name = null;
    }
}


SamiGroup*
SamiGroup::fromJson(String* json) {
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
SamiGroup::fromJsonObject(IJsonValue* pJson) {
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
JsonString* pDescriptionKey = new JsonString(L"description");
        IJsonValue* pDescriptionVal = null;
        pJsonObject->GetValue(pDescriptionKey, pDescriptionVal);
        if(pDescriptionVal != null) {
            
            pDescription = new String();
            jsonToValue(pDescription, pDescriptionVal, L"String", L"String");
        }
        delete pDescriptionKey;
JsonString* pIdKey = new JsonString(L"id");
        IJsonValue* pIdVal = null;
        pJsonObject->GetValue(pIdKey, pIdVal);
        if(pIdVal != null) {
            
            pId = new Integer();
            jsonToValue(pId, pIdVal, L"Integer", L"Integer");
        }
        delete pIdKey;
JsonString* pMember_countKey = new JsonString(L"member_count");
        IJsonValue* pMember_countVal = null;
        pJsonObject->GetValue(pMember_countKey, pMember_countVal);
        if(pMember_countVal != null) {
            
            pMember_count = new Integer();
            jsonToValue(pMember_count, pMember_countVal, L"Integer", L"Integer");
        }
        delete pMember_countKey;
JsonString* pMessage_of_the_dayKey = new JsonString(L"message_of_the_day");
        IJsonValue* pMessage_of_the_dayVal = null;
        pJsonObject->GetValue(pMessage_of_the_dayKey, pMessage_of_the_dayVal);
        if(pMessage_of_the_dayVal != null) {
            
            pMessage_of_the_day = new String();
            jsonToValue(pMessage_of_the_day, pMessage_of_the_dayVal, L"String", L"String");
        }
        delete pMessage_of_the_dayKey;
JsonString* pNameKey = new JsonString(L"name");
        IJsonValue* pNameVal = null;
        pJsonObject->GetValue(pNameKey, pNameVal);
        if(pNameVal != null) {
            
            pName = new String();
            jsonToValue(pName, pNameVal, L"String", L"String");
        }
        delete pNameKey;
JsonString* pParentKey = new JsonString(L"parent");
        IJsonValue* pParentVal = null;
        pJsonObject->GetValue(pParentKey, pParentVal);
        if(pParentVal != null) {
            
            pParent = new SamiGroup();
            jsonToValue(pParent, pParentVal, L"SamiGroup", L"SamiGroup");
        }
        delete pParentKey;
JsonString* pProperties_stringKey = new JsonString(L"properties_string");
        IJsonValue* pProperties_stringVal = null;
        pJsonObject->GetValue(pProperties_stringKey, pProperties_stringVal);
        if(pProperties_stringVal != null) {
            
            pProperties_string = new String();
            jsonToValue(pProperties_string, pProperties_stringVal, L"String", L"String");
        }
        delete pProperties_stringKey;
JsonString* pStatusKey = new JsonString(L"status");
        IJsonValue* pStatusVal = null;
        pJsonObject->GetValue(pStatusKey, pStatusVal);
        if(pStatusVal != null) {
            
            pStatus = new String();
            jsonToValue(pStatus, pStatusVal, L"String", L"String");
        }
        delete pStatusKey;
JsonString* pSub_member_countKey = new JsonString(L"sub_member_count");
        IJsonValue* pSub_member_countVal = null;
        pJsonObject->GetValue(pSub_member_countKey, pSub_member_countVal);
        if(pSub_member_countVal != null) {
            
            pSub_member_count = new Integer();
            jsonToValue(pSub_member_count, pSub_member_countVal, L"Integer", L"Integer");
        }
        delete pSub_member_countKey;
JsonString* pTemplateKey = new JsonString(L"template");
        IJsonValue* pTemplateVal = null;
        pJsonObject->GetValue(pTemplateKey, pTemplateVal);
        if(pTemplateVal != null) {
            
            pTemplate = new String();
            jsonToValue(pTemplate, pTemplateVal, L"String", L"String");
        }
        delete pTemplateKey;
JsonString* pUnique_nameKey = new JsonString(L"unique_name");
        IJsonValue* pUnique_nameVal = null;
        pJsonObject->GetValue(pUnique_nameKey, pUnique_nameVal);
        if(pUnique_nameVal != null) {
            
            pUnique_name = new String();
            jsonToValue(pUnique_name, pUnique_nameVal, L"String", L"String");
        }
        delete pUnique_nameKey;
    }
}

SamiGroup::SamiGroup(String* json) {
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
SamiGroup::asJson ()
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
SamiGroup::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pAdditional_propertiesKey = new JsonString(L"additional_properties");
    pJsonObject->Add(pAdditional_propertiesKey, toJson(getPAdditionalProperties(), "SamiProperty", "map"));

    JsonString *pDescriptionKey = new JsonString(L"description");
    pJsonObject->Add(pDescriptionKey, toJson(getPDescription(), "String", ""));

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "Integer", ""));

    JsonString *pMember_countKey = new JsonString(L"member_count");
    pJsonObject->Add(pMember_countKey, toJson(getPMemberCount(), "Integer", ""));

    JsonString *pMessage_of_the_dayKey = new JsonString(L"message_of_the_day");
    pJsonObject->Add(pMessage_of_the_dayKey, toJson(getPMessageOfTheDay(), "String", ""));

    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    JsonString *pParentKey = new JsonString(L"parent");
    pJsonObject->Add(pParentKey, toJson(getPParent(), "SamiGroup", ""));

    JsonString *pProperties_stringKey = new JsonString(L"properties_string");
    pJsonObject->Add(pProperties_stringKey, toJson(getPPropertiesString(), "String", ""));

    JsonString *pStatusKey = new JsonString(L"status");
    pJsonObject->Add(pStatusKey, toJson(getPStatus(), "String", ""));

    JsonString *pSub_member_countKey = new JsonString(L"sub_member_count");
    pJsonObject->Add(pSub_member_countKey, toJson(getPSubMemberCount(), "Integer", ""));

    JsonString *pTemplateKey = new JsonString(L"template");
    pJsonObject->Add(pTemplateKey, toJson(getPTemplate(), "String", ""));

    JsonString *pUnique_nameKey = new JsonString(L"unique_name");
    pJsonObject->Add(pUnique_nameKey, toJson(getPUniqueName(), "String", ""));

    return pJsonObject;
}

HashMap*
SamiGroup::getPAdditionalProperties() {
    return pAdditional_properties;
}
void
SamiGroup::setPAdditionalProperties(HashMap* pAdditional_properties) {
    this->pAdditional_properties = pAdditional_properties;
}

String*
SamiGroup::getPDescription() {
    return pDescription;
}
void
SamiGroup::setPDescription(String* pDescription) {
    this->pDescription = pDescription;
}

Integer*
SamiGroup::getPId() {
    return pId;
}
void
SamiGroup::setPId(Integer* pId) {
    this->pId = pId;
}

Integer*
SamiGroup::getPMemberCount() {
    return pMember_count;
}
void
SamiGroup::setPMemberCount(Integer* pMember_count) {
    this->pMember_count = pMember_count;
}

String*
SamiGroup::getPMessageOfTheDay() {
    return pMessage_of_the_day;
}
void
SamiGroup::setPMessageOfTheDay(String* pMessage_of_the_day) {
    this->pMessage_of_the_day = pMessage_of_the_day;
}

String*
SamiGroup::getPName() {
    return pName;
}
void
SamiGroup::setPName(String* pName) {
    this->pName = pName;
}

SamiGroup*
SamiGroup::getPParent() {
    return pParent;
}
void
SamiGroup::setPParent(SamiGroup* pParent) {
    this->pParent = pParent;
}

String*
SamiGroup::getPPropertiesString() {
    return pProperties_string;
}
void
SamiGroup::setPPropertiesString(String* pProperties_string) {
    this->pProperties_string = pProperties_string;
}

String*
SamiGroup::getPStatus() {
    return pStatus;
}
void
SamiGroup::setPStatus(String* pStatus) {
    this->pStatus = pStatus;
}

Integer*
SamiGroup::getPSubMemberCount() {
    return pSub_member_count;
}
void
SamiGroup::setPSubMemberCount(Integer* pSub_member_count) {
    this->pSub_member_count = pSub_member_count;
}

String*
SamiGroup::getPTemplate() {
    return pTemplate;
}
void
SamiGroup::setPTemplate(String* pTemplate) {
    this->pTemplate = pTemplate;
}

String*
SamiGroup::getPUniqueName() {
    return pUnique_name;
}
void
SamiGroup::setPUniqueName(String* pUnique_name) {
    this->pUnique_name = pUnique_name;
}



} /* namespace Swagger */

