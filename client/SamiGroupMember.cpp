
#include "SamiGroupMember.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiGroupMember::SamiGroupMember() {
    init();
}

SamiGroupMember::~SamiGroupMember() {
    this->cleanup();
}

void
SamiGroupMember::init() {
    pGroup = null;
pSecondary = null;
pStatus = null;
pUser = null;
}

void
SamiGroupMember::cleanup() {
    if(pGroup != null) {
        
        delete pGroup;
        pGroup = null;
    }
if(pSecondary != null) {
        
        delete pSecondary;
        pSecondary = null;
    }
if(pStatus != null) {
        
        delete pStatus;
        pStatus = null;
    }
if(pUser != null) {
        
        delete pUser;
        pUser = null;
    }
}


SamiGroupMember*
SamiGroupMember::fromJson(String* json) {
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
SamiGroupMember::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pGroupKey = new JsonString(L"group");
        IJsonValue* pGroupVal = null;
        pJsonObject->GetValue(pGroupKey, pGroupVal);
        if(pGroupVal != null) {
            
            pGroup = new SamiGroup();
            jsonToValue(pGroup, pGroupVal, L"SamiGroup", L"SamiGroup");
        }
        delete pGroupKey;
JsonString* pSecondaryKey = new JsonString(L"secondary");
        IJsonValue* pSecondaryVal = null;
        pJsonObject->GetValue(pSecondaryKey, pSecondaryVal);
        if(pSecondaryVal != null) {
            
            pSecondary = new Boolean(false);
            jsonToValue(pSecondary, pSecondaryVal, L"Boolean", L"Boolean");
        }
        delete pSecondaryKey;
JsonString* pStatusKey = new JsonString(L"status");
        IJsonValue* pStatusVal = null;
        pJsonObject->GetValue(pStatusKey, pStatusVal);
        if(pStatusVal != null) {
            
            pStatus = new String();
            jsonToValue(pStatus, pStatusVal, L"String", L"String");
        }
        delete pStatusKey;
JsonString* pUserKey = new JsonString(L"user");
        IJsonValue* pUserVal = null;
        pJsonObject->GetValue(pUserKey, pUserVal);
        if(pUserVal != null) {
            
            pUser = new SamiUser();
            jsonToValue(pUser, pUserVal, L"SamiUser", L"SamiUser");
        }
        delete pUserKey;
    }
}

SamiGroupMember::SamiGroupMember(String* json) {
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
SamiGroupMember::asJson ()
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
SamiGroupMember::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pGroupKey = new JsonString(L"group");
    pJsonObject->Add(pGroupKey, toJson(getPGroup(), "SamiGroup", ""));

    JsonString *pSecondaryKey = new JsonString(L"secondary");
    pJsonObject->Add(pSecondaryKey, toJson(getPSecondary(), "Boolean", ""));

    JsonString *pStatusKey = new JsonString(L"status");
    pJsonObject->Add(pStatusKey, toJson(getPStatus(), "String", ""));

    JsonString *pUserKey = new JsonString(L"user");
    pJsonObject->Add(pUserKey, toJson(getPUser(), "SamiUser", ""));

    return pJsonObject;
}

SamiGroup*
SamiGroupMember::getPGroup() {
    return pGroup;
}
void
SamiGroupMember::setPGroup(SamiGroup* pGroup) {
    this->pGroup = pGroup;
}

Boolean*
SamiGroupMember::getPSecondary() {
    return pSecondary;
}
void
SamiGroupMember::setPSecondary(Boolean* pSecondary) {
    this->pSecondary = pSecondary;
}

String*
SamiGroupMember::getPStatus() {
    return pStatus;
}
void
SamiGroupMember::setPStatus(String* pStatus) {
    this->pStatus = pStatus;
}

SamiUser*
SamiGroupMember::getPUser() {
    return pUser;
}
void
SamiGroupMember::setPUser(SamiUser* pUser) {
    this->pUser = pUser;
}



} /* namespace Swagger */

