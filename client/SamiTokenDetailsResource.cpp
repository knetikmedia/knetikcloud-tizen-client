
#include "SamiTokenDetailsResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiTokenDetailsResource::SamiTokenDetailsResource() {
    init();
}

SamiTokenDetailsResource::~SamiTokenDetailsResource() {
    this->cleanup();
}

void
SamiTokenDetailsResource::init() {
    pRoles = null;
pUser_id = null;
}

void
SamiTokenDetailsResource::cleanup() {
    if(pRoles != null) {
        pRoles->RemoveAll(true);
        delete pRoles;
        pRoles = null;
    }
if(pUser_id != null) {
        
        delete pUser_id;
        pUser_id = null;
    }
}


SamiTokenDetailsResource*
SamiTokenDetailsResource::fromJson(String* json) {
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
SamiTokenDetailsResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pRolesKey = new JsonString(L"roles");
        IJsonValue* pRolesVal = null;
        pJsonObject->GetValue(pRolesKey, pRolesVal);
        if(pRolesVal != null) {
            pRoles = new ArrayList();
            
            jsonToValue(pRoles, pRolesVal, L"IList", L"String");
        }
        delete pRolesKey;
JsonString* pUser_idKey = new JsonString(L"user_id");
        IJsonValue* pUser_idVal = null;
        pJsonObject->GetValue(pUser_idKey, pUser_idVal);
        if(pUser_idVal != null) {
            
            pUser_id = new Integer();
            jsonToValue(pUser_id, pUser_idVal, L"Integer", L"Integer");
        }
        delete pUser_idKey;
    }
}

SamiTokenDetailsResource::SamiTokenDetailsResource(String* json) {
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
SamiTokenDetailsResource::asJson ()
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
SamiTokenDetailsResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pRolesKey = new JsonString(L"roles");
    pJsonObject->Add(pRolesKey, toJson(getPRoles(), "String", "array"));

    JsonString *pUser_idKey = new JsonString(L"user_id");
    pJsonObject->Add(pUser_idKey, toJson(getPUserId(), "Integer", ""));

    return pJsonObject;
}

IList*
SamiTokenDetailsResource::getPRoles() {
    return pRoles;
}
void
SamiTokenDetailsResource::setPRoles(IList* pRoles) {
    this->pRoles = pRoles;
}

Integer*
SamiTokenDetailsResource::getPUserId() {
    return pUser_id;
}
void
SamiTokenDetailsResource::setPUserId(Integer* pUser_id) {
    this->pUser_id = pUser_id;
}



} /* namespace Swagger */

