
#include "SamiEntitlementGrantRequest.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiEntitlementGrantRequest::SamiEntitlementGrantRequest() {
    init();
}

SamiEntitlementGrantRequest::~SamiEntitlementGrantRequest() {
    this->cleanup();
}

void
SamiEntitlementGrantRequest::init() {
    pEntitlement_id = null;
}

void
SamiEntitlementGrantRequest::cleanup() {
    if(pEntitlement_id != null) {
        
        delete pEntitlement_id;
        pEntitlement_id = null;
    }
}


SamiEntitlementGrantRequest*
SamiEntitlementGrantRequest::fromJson(String* json) {
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
SamiEntitlementGrantRequest::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pEntitlement_idKey = new JsonString(L"entitlement_id");
        IJsonValue* pEntitlement_idVal = null;
        pJsonObject->GetValue(pEntitlement_idKey, pEntitlement_idVal);
        if(pEntitlement_idVal != null) {
            
            pEntitlement_id = new Integer();
            jsonToValue(pEntitlement_id, pEntitlement_idVal, L"Integer", L"Integer");
        }
        delete pEntitlement_idKey;
    }
}

SamiEntitlementGrantRequest::SamiEntitlementGrantRequest(String* json) {
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
SamiEntitlementGrantRequest::asJson ()
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
SamiEntitlementGrantRequest::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pEntitlement_idKey = new JsonString(L"entitlement_id");
    pJsonObject->Add(pEntitlement_idKey, toJson(getPEntitlementId(), "Integer", ""));

    return pJsonObject;
}

Integer*
SamiEntitlementGrantRequest::getPEntitlementId() {
    return pEntitlement_id;
}
void
SamiEntitlementGrantRequest::setPEntitlementId(Integer* pEntitlement_id) {
    this->pEntitlement_id = pEntitlement_id;
}



} /* namespace Swagger */

