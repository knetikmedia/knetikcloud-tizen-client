
#include "SamiVendorResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiVendorResource::SamiVendorResource() {
    init();
}

SamiVendorResource::~SamiVendorResource() {
    this->cleanup();
}

void
SamiVendorResource::init() {
    pActive = null;
pCreate_date = null;
pDescription = null;
pId = null;
pImage_url = null;
pManual_approval = null;
pName = null;
pPrimary_contact_email = null;
pPrimary_contact_name = null;
pPrimary_contact_phone = null;
pSales_email = null;
pSupport_email = null;
pUpdate_date = null;
pUrl = null;
}

void
SamiVendorResource::cleanup() {
    if(pActive != null) {
        
        delete pActive;
        pActive = null;
    }
if(pCreate_date != null) {
        
        delete pCreate_date;
        pCreate_date = null;
    }
if(pDescription != null) {
        
        delete pDescription;
        pDescription = null;
    }
if(pId != null) {
        
        delete pId;
        pId = null;
    }
if(pImage_url != null) {
        
        delete pImage_url;
        pImage_url = null;
    }
if(pManual_approval != null) {
        
        delete pManual_approval;
        pManual_approval = null;
    }
if(pName != null) {
        
        delete pName;
        pName = null;
    }
if(pPrimary_contact_email != null) {
        
        delete pPrimary_contact_email;
        pPrimary_contact_email = null;
    }
if(pPrimary_contact_name != null) {
        
        delete pPrimary_contact_name;
        pPrimary_contact_name = null;
    }
if(pPrimary_contact_phone != null) {
        
        delete pPrimary_contact_phone;
        pPrimary_contact_phone = null;
    }
if(pSales_email != null) {
        
        delete pSales_email;
        pSales_email = null;
    }
if(pSupport_email != null) {
        
        delete pSupport_email;
        pSupport_email = null;
    }
if(pUpdate_date != null) {
        
        delete pUpdate_date;
        pUpdate_date = null;
    }
if(pUrl != null) {
        
        delete pUrl;
        pUrl = null;
    }
}


SamiVendorResource*
SamiVendorResource::fromJson(String* json) {
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
SamiVendorResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pActiveKey = new JsonString(L"active");
        IJsonValue* pActiveVal = null;
        pJsonObject->GetValue(pActiveKey, pActiveVal);
        if(pActiveVal != null) {
            
            pActive = new Boolean(false);
            jsonToValue(pActive, pActiveVal, L"Boolean", L"Boolean");
        }
        delete pActiveKey;
JsonString* pCreate_dateKey = new JsonString(L"create_date");
        IJsonValue* pCreate_dateVal = null;
        pJsonObject->GetValue(pCreate_dateKey, pCreate_dateVal);
        if(pCreate_dateVal != null) {
            
            pCreate_date = new Long();
            jsonToValue(pCreate_date, pCreate_dateVal, L"Long", L"Long");
        }
        delete pCreate_dateKey;
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
JsonString* pImage_urlKey = new JsonString(L"image_url");
        IJsonValue* pImage_urlVal = null;
        pJsonObject->GetValue(pImage_urlKey, pImage_urlVal);
        if(pImage_urlVal != null) {
            
            pImage_url = new String();
            jsonToValue(pImage_url, pImage_urlVal, L"String", L"String");
        }
        delete pImage_urlKey;
JsonString* pManual_approvalKey = new JsonString(L"manual_approval");
        IJsonValue* pManual_approvalVal = null;
        pJsonObject->GetValue(pManual_approvalKey, pManual_approvalVal);
        if(pManual_approvalVal != null) {
            
            pManual_approval = new Boolean(false);
            jsonToValue(pManual_approval, pManual_approvalVal, L"Boolean", L"Boolean");
        }
        delete pManual_approvalKey;
JsonString* pNameKey = new JsonString(L"name");
        IJsonValue* pNameVal = null;
        pJsonObject->GetValue(pNameKey, pNameVal);
        if(pNameVal != null) {
            
            pName = new String();
            jsonToValue(pName, pNameVal, L"String", L"String");
        }
        delete pNameKey;
JsonString* pPrimary_contact_emailKey = new JsonString(L"primary_contact_email");
        IJsonValue* pPrimary_contact_emailVal = null;
        pJsonObject->GetValue(pPrimary_contact_emailKey, pPrimary_contact_emailVal);
        if(pPrimary_contact_emailVal != null) {
            
            pPrimary_contact_email = new String();
            jsonToValue(pPrimary_contact_email, pPrimary_contact_emailVal, L"String", L"String");
        }
        delete pPrimary_contact_emailKey;
JsonString* pPrimary_contact_nameKey = new JsonString(L"primary_contact_name");
        IJsonValue* pPrimary_contact_nameVal = null;
        pJsonObject->GetValue(pPrimary_contact_nameKey, pPrimary_contact_nameVal);
        if(pPrimary_contact_nameVal != null) {
            
            pPrimary_contact_name = new String();
            jsonToValue(pPrimary_contact_name, pPrimary_contact_nameVal, L"String", L"String");
        }
        delete pPrimary_contact_nameKey;
JsonString* pPrimary_contact_phoneKey = new JsonString(L"primary_contact_phone");
        IJsonValue* pPrimary_contact_phoneVal = null;
        pJsonObject->GetValue(pPrimary_contact_phoneKey, pPrimary_contact_phoneVal);
        if(pPrimary_contact_phoneVal != null) {
            
            pPrimary_contact_phone = new String();
            jsonToValue(pPrimary_contact_phone, pPrimary_contact_phoneVal, L"String", L"String");
        }
        delete pPrimary_contact_phoneKey;
JsonString* pSales_emailKey = new JsonString(L"sales_email");
        IJsonValue* pSales_emailVal = null;
        pJsonObject->GetValue(pSales_emailKey, pSales_emailVal);
        if(pSales_emailVal != null) {
            
            pSales_email = new String();
            jsonToValue(pSales_email, pSales_emailVal, L"String", L"String");
        }
        delete pSales_emailKey;
JsonString* pSupport_emailKey = new JsonString(L"support_email");
        IJsonValue* pSupport_emailVal = null;
        pJsonObject->GetValue(pSupport_emailKey, pSupport_emailVal);
        if(pSupport_emailVal != null) {
            
            pSupport_email = new String();
            jsonToValue(pSupport_email, pSupport_emailVal, L"String", L"String");
        }
        delete pSupport_emailKey;
JsonString* pUpdate_dateKey = new JsonString(L"update_date");
        IJsonValue* pUpdate_dateVal = null;
        pJsonObject->GetValue(pUpdate_dateKey, pUpdate_dateVal);
        if(pUpdate_dateVal != null) {
            
            pUpdate_date = new Long();
            jsonToValue(pUpdate_date, pUpdate_dateVal, L"Long", L"Long");
        }
        delete pUpdate_dateKey;
JsonString* pUrlKey = new JsonString(L"url");
        IJsonValue* pUrlVal = null;
        pJsonObject->GetValue(pUrlKey, pUrlVal);
        if(pUrlVal != null) {
            
            pUrl = new String();
            jsonToValue(pUrl, pUrlVal, L"String", L"String");
        }
        delete pUrlKey;
    }
}

SamiVendorResource::SamiVendorResource(String* json) {
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
SamiVendorResource::asJson ()
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
SamiVendorResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pActiveKey = new JsonString(L"active");
    pJsonObject->Add(pActiveKey, toJson(getPActive(), "Boolean", ""));

    JsonString *pCreate_dateKey = new JsonString(L"create_date");
    pJsonObject->Add(pCreate_dateKey, toJson(getPCreateDate(), "Long", ""));

    JsonString *pDescriptionKey = new JsonString(L"description");
    pJsonObject->Add(pDescriptionKey, toJson(getPDescription(), "String", ""));

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "Integer", ""));

    JsonString *pImage_urlKey = new JsonString(L"image_url");
    pJsonObject->Add(pImage_urlKey, toJson(getPImageUrl(), "String", ""));

    JsonString *pManual_approvalKey = new JsonString(L"manual_approval");
    pJsonObject->Add(pManual_approvalKey, toJson(getPManualApproval(), "Boolean", ""));

    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    JsonString *pPrimary_contact_emailKey = new JsonString(L"primary_contact_email");
    pJsonObject->Add(pPrimary_contact_emailKey, toJson(getPPrimaryContactEmail(), "String", ""));

    JsonString *pPrimary_contact_nameKey = new JsonString(L"primary_contact_name");
    pJsonObject->Add(pPrimary_contact_nameKey, toJson(getPPrimaryContactName(), "String", ""));

    JsonString *pPrimary_contact_phoneKey = new JsonString(L"primary_contact_phone");
    pJsonObject->Add(pPrimary_contact_phoneKey, toJson(getPPrimaryContactPhone(), "String", ""));

    JsonString *pSales_emailKey = new JsonString(L"sales_email");
    pJsonObject->Add(pSales_emailKey, toJson(getPSalesEmail(), "String", ""));

    JsonString *pSupport_emailKey = new JsonString(L"support_email");
    pJsonObject->Add(pSupport_emailKey, toJson(getPSupportEmail(), "String", ""));

    JsonString *pUpdate_dateKey = new JsonString(L"update_date");
    pJsonObject->Add(pUpdate_dateKey, toJson(getPUpdateDate(), "Long", ""));

    JsonString *pUrlKey = new JsonString(L"url");
    pJsonObject->Add(pUrlKey, toJson(getPUrl(), "String", ""));

    return pJsonObject;
}

Boolean*
SamiVendorResource::getPActive() {
    return pActive;
}
void
SamiVendorResource::setPActive(Boolean* pActive) {
    this->pActive = pActive;
}

Long*
SamiVendorResource::getPCreateDate() {
    return pCreate_date;
}
void
SamiVendorResource::setPCreateDate(Long* pCreate_date) {
    this->pCreate_date = pCreate_date;
}

String*
SamiVendorResource::getPDescription() {
    return pDescription;
}
void
SamiVendorResource::setPDescription(String* pDescription) {
    this->pDescription = pDescription;
}

Integer*
SamiVendorResource::getPId() {
    return pId;
}
void
SamiVendorResource::setPId(Integer* pId) {
    this->pId = pId;
}

String*
SamiVendorResource::getPImageUrl() {
    return pImage_url;
}
void
SamiVendorResource::setPImageUrl(String* pImage_url) {
    this->pImage_url = pImage_url;
}

Boolean*
SamiVendorResource::getPManualApproval() {
    return pManual_approval;
}
void
SamiVendorResource::setPManualApproval(Boolean* pManual_approval) {
    this->pManual_approval = pManual_approval;
}

String*
SamiVendorResource::getPName() {
    return pName;
}
void
SamiVendorResource::setPName(String* pName) {
    this->pName = pName;
}

String*
SamiVendorResource::getPPrimaryContactEmail() {
    return pPrimary_contact_email;
}
void
SamiVendorResource::setPPrimaryContactEmail(String* pPrimary_contact_email) {
    this->pPrimary_contact_email = pPrimary_contact_email;
}

String*
SamiVendorResource::getPPrimaryContactName() {
    return pPrimary_contact_name;
}
void
SamiVendorResource::setPPrimaryContactName(String* pPrimary_contact_name) {
    this->pPrimary_contact_name = pPrimary_contact_name;
}

String*
SamiVendorResource::getPPrimaryContactPhone() {
    return pPrimary_contact_phone;
}
void
SamiVendorResource::setPPrimaryContactPhone(String* pPrimary_contact_phone) {
    this->pPrimary_contact_phone = pPrimary_contact_phone;
}

String*
SamiVendorResource::getPSalesEmail() {
    return pSales_email;
}
void
SamiVendorResource::setPSalesEmail(String* pSales_email) {
    this->pSales_email = pSales_email;
}

String*
SamiVendorResource::getPSupportEmail() {
    return pSupport_email;
}
void
SamiVendorResource::setPSupportEmail(String* pSupport_email) {
    this->pSupport_email = pSupport_email;
}

Long*
SamiVendorResource::getPUpdateDate() {
    return pUpdate_date;
}
void
SamiVendorResource::setPUpdateDate(Long* pUpdate_date) {
    this->pUpdate_date = pUpdate_date;
}

String*
SamiVendorResource::getPUrl() {
    return pUrl;
}
void
SamiVendorResource::setPUrl(String* pUrl) {
    this->pUrl = pUrl;
}



} /* namespace Swagger */

