
#include "SamiIOConfig.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiIOConfig::SamiIOConfig() {
    init();
}

SamiIOConfig::~SamiIOConfig() {
    this->cleanup();
}

void
SamiIOConfig::init() {
    pCustomer = null;
pEnabled = null;
pEnvironment = null;
pProduct = null;
}

void
SamiIOConfig::cleanup() {
    if(pCustomer != null) {
        
        delete pCustomer;
        pCustomer = null;
    }
if(pEnabled != null) {
        
        delete pEnabled;
        pEnabled = null;
    }
if(pEnvironment != null) {
        
        delete pEnvironment;
        pEnvironment = null;
    }
if(pProduct != null) {
        
        delete pProduct;
        pProduct = null;
    }
}


SamiIOConfig*
SamiIOConfig::fromJson(String* json) {
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
SamiIOConfig::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pCustomerKey = new JsonString(L"customer");
        IJsonValue* pCustomerVal = null;
        pJsonObject->GetValue(pCustomerKey, pCustomerVal);
        if(pCustomerVal != null) {
            
            pCustomer = new String();
            jsonToValue(pCustomer, pCustomerVal, L"String", L"String");
        }
        delete pCustomerKey;
JsonString* pEnabledKey = new JsonString(L"enabled");
        IJsonValue* pEnabledVal = null;
        pJsonObject->GetValue(pEnabledKey, pEnabledVal);
        if(pEnabledVal != null) {
            
            pEnabled = new Boolean(false);
            jsonToValue(pEnabled, pEnabledVal, L"Boolean", L"Boolean");
        }
        delete pEnabledKey;
JsonString* pEnvironmentKey = new JsonString(L"environment");
        IJsonValue* pEnvironmentVal = null;
        pJsonObject->GetValue(pEnvironmentKey, pEnvironmentVal);
        if(pEnvironmentVal != null) {
            
            pEnvironment = new String();
            jsonToValue(pEnvironment, pEnvironmentVal, L"String", L"String");
        }
        delete pEnvironmentKey;
JsonString* pProductKey = new JsonString(L"product");
        IJsonValue* pProductVal = null;
        pJsonObject->GetValue(pProductKey, pProductVal);
        if(pProductVal != null) {
            
            pProduct = new String();
            jsonToValue(pProduct, pProductVal, L"String", L"String");
        }
        delete pProductKey;
    }
}

SamiIOConfig::SamiIOConfig(String* json) {
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
SamiIOConfig::asJson ()
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
SamiIOConfig::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pCustomerKey = new JsonString(L"customer");
    pJsonObject->Add(pCustomerKey, toJson(getPCustomer(), "String", ""));

    JsonString *pEnabledKey = new JsonString(L"enabled");
    pJsonObject->Add(pEnabledKey, toJson(getPEnabled(), "Boolean", ""));

    JsonString *pEnvironmentKey = new JsonString(L"environment");
    pJsonObject->Add(pEnvironmentKey, toJson(getPEnvironment(), "String", ""));

    JsonString *pProductKey = new JsonString(L"product");
    pJsonObject->Add(pProductKey, toJson(getPProduct(), "String", ""));

    return pJsonObject;
}

String*
SamiIOConfig::getPCustomer() {
    return pCustomer;
}
void
SamiIOConfig::setPCustomer(String* pCustomer) {
    this->pCustomer = pCustomer;
}

Boolean*
SamiIOConfig::getPEnabled() {
    return pEnabled;
}
void
SamiIOConfig::setPEnabled(Boolean* pEnabled) {
    this->pEnabled = pEnabled;
}

String*
SamiIOConfig::getPEnvironment() {
    return pEnvironment;
}
void
SamiIOConfig::setPEnvironment(String* pEnvironment) {
    this->pEnvironment = pEnvironment;
}

String*
SamiIOConfig::getPProduct() {
    return pProduct;
}
void
SamiIOConfig::setPProduct(String* pProduct) {
    this->pProduct = pProduct;
}



} /* namespace Swagger */

