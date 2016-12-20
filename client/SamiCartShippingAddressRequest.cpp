
#include "SamiCartShippingAddressRequest.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiCartShippingAddressRequest::SamiCartShippingAddressRequest() {
    init();
}

SamiCartShippingAddressRequest::~SamiCartShippingAddressRequest() {
    this->cleanup();
}

void
SamiCartShippingAddressRequest::init() {
    pCity = null;
pCountry_code_iso3 = null;
pEmail = null;
pFirst_name = null;
pLast_name = null;
pName_prefix = null;
pOrder_notes = null;
pPhone_number = null;
pPostal_state_code = null;
pShipping_address_line1 = null;
pShipping_address_line2 = null;
pZip = null;
}

void
SamiCartShippingAddressRequest::cleanup() {
    if(pCity != null) {
        
        delete pCity;
        pCity = null;
    }
if(pCountry_code_iso3 != null) {
        
        delete pCountry_code_iso3;
        pCountry_code_iso3 = null;
    }
if(pEmail != null) {
        
        delete pEmail;
        pEmail = null;
    }
if(pFirst_name != null) {
        
        delete pFirst_name;
        pFirst_name = null;
    }
if(pLast_name != null) {
        
        delete pLast_name;
        pLast_name = null;
    }
if(pName_prefix != null) {
        
        delete pName_prefix;
        pName_prefix = null;
    }
if(pOrder_notes != null) {
        
        delete pOrder_notes;
        pOrder_notes = null;
    }
if(pPhone_number != null) {
        
        delete pPhone_number;
        pPhone_number = null;
    }
if(pPostal_state_code != null) {
        
        delete pPostal_state_code;
        pPostal_state_code = null;
    }
if(pShipping_address_line1 != null) {
        
        delete pShipping_address_line1;
        pShipping_address_line1 = null;
    }
if(pShipping_address_line2 != null) {
        
        delete pShipping_address_line2;
        pShipping_address_line2 = null;
    }
if(pZip != null) {
        
        delete pZip;
        pZip = null;
    }
}


SamiCartShippingAddressRequest*
SamiCartShippingAddressRequest::fromJson(String* json) {
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
SamiCartShippingAddressRequest::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pCityKey = new JsonString(L"city");
        IJsonValue* pCityVal = null;
        pJsonObject->GetValue(pCityKey, pCityVal);
        if(pCityVal != null) {
            
            pCity = new String();
            jsonToValue(pCity, pCityVal, L"String", L"String");
        }
        delete pCityKey;
JsonString* pCountry_code_iso3Key = new JsonString(L"country_code_iso3");
        IJsonValue* pCountry_code_iso3Val = null;
        pJsonObject->GetValue(pCountry_code_iso3Key, pCountry_code_iso3Val);
        if(pCountry_code_iso3Val != null) {
            
            pCountry_code_iso3 = new String();
            jsonToValue(pCountry_code_iso3, pCountry_code_iso3Val, L"String", L"String");
        }
        delete pCountry_code_iso3Key;
JsonString* pEmailKey = new JsonString(L"email");
        IJsonValue* pEmailVal = null;
        pJsonObject->GetValue(pEmailKey, pEmailVal);
        if(pEmailVal != null) {
            
            pEmail = new String();
            jsonToValue(pEmail, pEmailVal, L"String", L"String");
        }
        delete pEmailKey;
JsonString* pFirst_nameKey = new JsonString(L"first_name");
        IJsonValue* pFirst_nameVal = null;
        pJsonObject->GetValue(pFirst_nameKey, pFirst_nameVal);
        if(pFirst_nameVal != null) {
            
            pFirst_name = new String();
            jsonToValue(pFirst_name, pFirst_nameVal, L"String", L"String");
        }
        delete pFirst_nameKey;
JsonString* pLast_nameKey = new JsonString(L"last_name");
        IJsonValue* pLast_nameVal = null;
        pJsonObject->GetValue(pLast_nameKey, pLast_nameVal);
        if(pLast_nameVal != null) {
            
            pLast_name = new String();
            jsonToValue(pLast_name, pLast_nameVal, L"String", L"String");
        }
        delete pLast_nameKey;
JsonString* pName_prefixKey = new JsonString(L"name_prefix");
        IJsonValue* pName_prefixVal = null;
        pJsonObject->GetValue(pName_prefixKey, pName_prefixVal);
        if(pName_prefixVal != null) {
            
            pName_prefix = new String();
            jsonToValue(pName_prefix, pName_prefixVal, L"String", L"String");
        }
        delete pName_prefixKey;
JsonString* pOrder_notesKey = new JsonString(L"order_notes");
        IJsonValue* pOrder_notesVal = null;
        pJsonObject->GetValue(pOrder_notesKey, pOrder_notesVal);
        if(pOrder_notesVal != null) {
            
            pOrder_notes = new String();
            jsonToValue(pOrder_notes, pOrder_notesVal, L"String", L"String");
        }
        delete pOrder_notesKey;
JsonString* pPhone_numberKey = new JsonString(L"phone_number");
        IJsonValue* pPhone_numberVal = null;
        pJsonObject->GetValue(pPhone_numberKey, pPhone_numberVal);
        if(pPhone_numberVal != null) {
            
            pPhone_number = new String();
            jsonToValue(pPhone_number, pPhone_numberVal, L"String", L"String");
        }
        delete pPhone_numberKey;
JsonString* pPostal_state_codeKey = new JsonString(L"postal_state_code");
        IJsonValue* pPostal_state_codeVal = null;
        pJsonObject->GetValue(pPostal_state_codeKey, pPostal_state_codeVal);
        if(pPostal_state_codeVal != null) {
            
            pPostal_state_code = new String();
            jsonToValue(pPostal_state_code, pPostal_state_codeVal, L"String", L"String");
        }
        delete pPostal_state_codeKey;
JsonString* pShipping_address_line1Key = new JsonString(L"shipping_address_line1");
        IJsonValue* pShipping_address_line1Val = null;
        pJsonObject->GetValue(pShipping_address_line1Key, pShipping_address_line1Val);
        if(pShipping_address_line1Val != null) {
            
            pShipping_address_line1 = new String();
            jsonToValue(pShipping_address_line1, pShipping_address_line1Val, L"String", L"String");
        }
        delete pShipping_address_line1Key;
JsonString* pShipping_address_line2Key = new JsonString(L"shipping_address_line2");
        IJsonValue* pShipping_address_line2Val = null;
        pJsonObject->GetValue(pShipping_address_line2Key, pShipping_address_line2Val);
        if(pShipping_address_line2Val != null) {
            
            pShipping_address_line2 = new String();
            jsonToValue(pShipping_address_line2, pShipping_address_line2Val, L"String", L"String");
        }
        delete pShipping_address_line2Key;
JsonString* pZipKey = new JsonString(L"zip");
        IJsonValue* pZipVal = null;
        pJsonObject->GetValue(pZipKey, pZipVal);
        if(pZipVal != null) {
            
            pZip = new String();
            jsonToValue(pZip, pZipVal, L"String", L"String");
        }
        delete pZipKey;
    }
}

SamiCartShippingAddressRequest::SamiCartShippingAddressRequest(String* json) {
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
SamiCartShippingAddressRequest::asJson ()
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
SamiCartShippingAddressRequest::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pCityKey = new JsonString(L"city");
    pJsonObject->Add(pCityKey, toJson(getPCity(), "String", ""));

    JsonString *pCountry_code_iso3Key = new JsonString(L"country_code_iso3");
    pJsonObject->Add(pCountry_code_iso3Key, toJson(getPCountryCodeIso3(), "String", ""));

    JsonString *pEmailKey = new JsonString(L"email");
    pJsonObject->Add(pEmailKey, toJson(getPEmail(), "String", ""));

    JsonString *pFirst_nameKey = new JsonString(L"first_name");
    pJsonObject->Add(pFirst_nameKey, toJson(getPFirstName(), "String", ""));

    JsonString *pLast_nameKey = new JsonString(L"last_name");
    pJsonObject->Add(pLast_nameKey, toJson(getPLastName(), "String", ""));

    JsonString *pName_prefixKey = new JsonString(L"name_prefix");
    pJsonObject->Add(pName_prefixKey, toJson(getPNamePrefix(), "String", ""));

    JsonString *pOrder_notesKey = new JsonString(L"order_notes");
    pJsonObject->Add(pOrder_notesKey, toJson(getPOrderNotes(), "String", ""));

    JsonString *pPhone_numberKey = new JsonString(L"phone_number");
    pJsonObject->Add(pPhone_numberKey, toJson(getPPhoneNumber(), "String", ""));

    JsonString *pPostal_state_codeKey = new JsonString(L"postal_state_code");
    pJsonObject->Add(pPostal_state_codeKey, toJson(getPPostalStateCode(), "String", ""));

    JsonString *pShipping_address_line1Key = new JsonString(L"shipping_address_line1");
    pJsonObject->Add(pShipping_address_line1Key, toJson(getPShippingAddressLine1(), "String", ""));

    JsonString *pShipping_address_line2Key = new JsonString(L"shipping_address_line2");
    pJsonObject->Add(pShipping_address_line2Key, toJson(getPShippingAddressLine2(), "String", ""));

    JsonString *pZipKey = new JsonString(L"zip");
    pJsonObject->Add(pZipKey, toJson(getPZip(), "String", ""));

    return pJsonObject;
}

String*
SamiCartShippingAddressRequest::getPCity() {
    return pCity;
}
void
SamiCartShippingAddressRequest::setPCity(String* pCity) {
    this->pCity = pCity;
}

String*
SamiCartShippingAddressRequest::getPCountryCodeIso3() {
    return pCountry_code_iso3;
}
void
SamiCartShippingAddressRequest::setPCountryCodeIso3(String* pCountry_code_iso3) {
    this->pCountry_code_iso3 = pCountry_code_iso3;
}

String*
SamiCartShippingAddressRequest::getPEmail() {
    return pEmail;
}
void
SamiCartShippingAddressRequest::setPEmail(String* pEmail) {
    this->pEmail = pEmail;
}

String*
SamiCartShippingAddressRequest::getPFirstName() {
    return pFirst_name;
}
void
SamiCartShippingAddressRequest::setPFirstName(String* pFirst_name) {
    this->pFirst_name = pFirst_name;
}

String*
SamiCartShippingAddressRequest::getPLastName() {
    return pLast_name;
}
void
SamiCartShippingAddressRequest::setPLastName(String* pLast_name) {
    this->pLast_name = pLast_name;
}

String*
SamiCartShippingAddressRequest::getPNamePrefix() {
    return pName_prefix;
}
void
SamiCartShippingAddressRequest::setPNamePrefix(String* pName_prefix) {
    this->pName_prefix = pName_prefix;
}

String*
SamiCartShippingAddressRequest::getPOrderNotes() {
    return pOrder_notes;
}
void
SamiCartShippingAddressRequest::setPOrderNotes(String* pOrder_notes) {
    this->pOrder_notes = pOrder_notes;
}

String*
SamiCartShippingAddressRequest::getPPhoneNumber() {
    return pPhone_number;
}
void
SamiCartShippingAddressRequest::setPPhoneNumber(String* pPhone_number) {
    this->pPhone_number = pPhone_number;
}

String*
SamiCartShippingAddressRequest::getPPostalStateCode() {
    return pPostal_state_code;
}
void
SamiCartShippingAddressRequest::setPPostalStateCode(String* pPostal_state_code) {
    this->pPostal_state_code = pPostal_state_code;
}

String*
SamiCartShippingAddressRequest::getPShippingAddressLine1() {
    return pShipping_address_line1;
}
void
SamiCartShippingAddressRequest::setPShippingAddressLine1(String* pShipping_address_line1) {
    this->pShipping_address_line1 = pShipping_address_line1;
}

String*
SamiCartShippingAddressRequest::getPShippingAddressLine2() {
    return pShipping_address_line2;
}
void
SamiCartShippingAddressRequest::setPShippingAddressLine2(String* pShipping_address_line2) {
    this->pShipping_address_line2 = pShipping_address_line2;
}

String*
SamiCartShippingAddressRequest::getPZip() {
    return pZip;
}
void
SamiCartShippingAddressRequest::setPZip(String* pZip) {
    this->pZip = pZip;
}



} /* namespace Swagger */

