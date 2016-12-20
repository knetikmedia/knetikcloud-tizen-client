
#include "SamiSampleCountriesResponse.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiSampleCountriesResponse::SamiSampleCountriesResponse() {
    init();
}

SamiSampleCountriesResponse::~SamiSampleCountriesResponse() {
    this->cleanup();
}

void
SamiSampleCountriesResponse::init() {
    pVendor_id1 = null;
pVendor_id2 = null;
}

void
SamiSampleCountriesResponse::cleanup() {
    if(pVendor_id1 != null) {
        pVendor_id1->RemoveAll(true);
        delete pVendor_id1;
        pVendor_id1 = null;
    }
if(pVendor_id2 != null) {
        pVendor_id2->RemoveAll(true);
        delete pVendor_id2;
        pVendor_id2 = null;
    }
}


SamiSampleCountriesResponse*
SamiSampleCountriesResponse::fromJson(String* json) {
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
SamiSampleCountriesResponse::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pVendor_id1Key = new JsonString(L"vendor_id1");
        IJsonValue* pVendor_id1Val = null;
        pJsonObject->GetValue(pVendor_id1Key, pVendor_id1Val);
        if(pVendor_id1Val != null) {
            pVendor_id1 = new ArrayList();
            
            jsonToValue(pVendor_id1, pVendor_id1Val, L"IList", L"SamiCountry");
        }
        delete pVendor_id1Key;
JsonString* pVendor_id2Key = new JsonString(L"vendor_id2");
        IJsonValue* pVendor_id2Val = null;
        pJsonObject->GetValue(pVendor_id2Key, pVendor_id2Val);
        if(pVendor_id2Val != null) {
            pVendor_id2 = new ArrayList();
            
            jsonToValue(pVendor_id2, pVendor_id2Val, L"IList", L"SamiCountry");
        }
        delete pVendor_id2Key;
    }
}

SamiSampleCountriesResponse::SamiSampleCountriesResponse(String* json) {
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
SamiSampleCountriesResponse::asJson ()
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
SamiSampleCountriesResponse::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pVendor_id1Key = new JsonString(L"vendor_id1");
    pJsonObject->Add(pVendor_id1Key, toJson(getPVendorId1(), "SamiCountry", "array"));

    JsonString *pVendor_id2Key = new JsonString(L"vendor_id2");
    pJsonObject->Add(pVendor_id2Key, toJson(getPVendorId2(), "SamiCountry", "array"));

    return pJsonObject;
}

IList*
SamiSampleCountriesResponse::getPVendorId1() {
    return pVendor_id1;
}
void
SamiSampleCountriesResponse::setPVendorId1(IList* pVendor_id1) {
    this->pVendor_id1 = pVendor_id1;
}

IList*
SamiSampleCountriesResponse::getPVendorId2() {
    return pVendor_id2;
}
void
SamiSampleCountriesResponse::setPVendorId2(IList* pVendor_id2) {
    this->pVendor_id2 = pVendor_id2;
}



} /* namespace Swagger */

