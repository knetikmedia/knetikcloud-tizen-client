
#include "SamiLimitedGettableGroup.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiLimitedGettableGroup::SamiLimitedGettableGroup() {
    init();
}

SamiLimitedGettableGroup::~SamiLimitedGettableGroup() {
    this->cleanup();
}

void
SamiLimitedGettableGroup::init() {
    pActive_only = null;
pName = null;
pOwned_limit = null;
}

void
SamiLimitedGettableGroup::cleanup() {
    if(pActive_only != null) {
        
        delete pActive_only;
        pActive_only = null;
    }
if(pName != null) {
        
        delete pName;
        pName = null;
    }
if(pOwned_limit != null) {
        
        delete pOwned_limit;
        pOwned_limit = null;
    }
}


SamiLimitedGettableGroup*
SamiLimitedGettableGroup::fromJson(String* json) {
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
SamiLimitedGettableGroup::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pActive_onlyKey = new JsonString(L"active_only");
        IJsonValue* pActive_onlyVal = null;
        pJsonObject->GetValue(pActive_onlyKey, pActive_onlyVal);
        if(pActive_onlyVal != null) {
            
            pActive_only = new Boolean(false);
            jsonToValue(pActive_only, pActive_onlyVal, L"Boolean", L"Boolean");
        }
        delete pActive_onlyKey;
JsonString* pNameKey = new JsonString(L"name");
        IJsonValue* pNameVal = null;
        pJsonObject->GetValue(pNameKey, pNameVal);
        if(pNameVal != null) {
            
            pName = new String();
            jsonToValue(pName, pNameVal, L"String", L"String");
        }
        delete pNameKey;
JsonString* pOwned_limitKey = new JsonString(L"owned_limit");
        IJsonValue* pOwned_limitVal = null;
        pJsonObject->GetValue(pOwned_limitKey, pOwned_limitVal);
        if(pOwned_limitVal != null) {
            
            pOwned_limit = new Integer();
            jsonToValue(pOwned_limit, pOwned_limitVal, L"Integer", L"Integer");
        }
        delete pOwned_limitKey;
    }
}

SamiLimitedGettableGroup::SamiLimitedGettableGroup(String* json) {
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
SamiLimitedGettableGroup::asJson ()
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
SamiLimitedGettableGroup::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pActive_onlyKey = new JsonString(L"active_only");
    pJsonObject->Add(pActive_onlyKey, toJson(getPActiveOnly(), "Boolean", ""));

    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    JsonString *pOwned_limitKey = new JsonString(L"owned_limit");
    pJsonObject->Add(pOwned_limitKey, toJson(getPOwnedLimit(), "Integer", ""));

    return pJsonObject;
}

Boolean*
SamiLimitedGettableGroup::getPActiveOnly() {
    return pActive_only;
}
void
SamiLimitedGettableGroup::setPActiveOnly(Boolean* pActive_only) {
    this->pActive_only = pActive_only;
}

String*
SamiLimitedGettableGroup::getPName() {
    return pName;
}
void
SamiLimitedGettableGroup::setPName(String* pName) {
    this->pName = pName;
}

Integer*
SamiLimitedGettableGroup::getPOwnedLimit() {
    return pOwned_limit;
}
void
SamiLimitedGettableGroup::setPOwnedLimit(Integer* pOwned_limit) {
    this->pOwned_limit = pOwned_limit;
}



} /* namespace Swagger */

