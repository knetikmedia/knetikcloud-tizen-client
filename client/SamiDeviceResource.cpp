
#include "SamiDeviceResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiDeviceResource::SamiDeviceResource() {
    init();
}

SamiDeviceResource::~SamiDeviceResource() {
    this->cleanup();
}

void
SamiDeviceResource::init() {
    pAuthorization = null;
pCondition = null;
pCreated_date = null;
pData = null;
pDescription = null;
pDevice_type = null;
pId = null;
pLocation = null;
pMac_address = null;
pMake = null;
pModel = null;
pName = null;
pOs = null;
pSerial = null;
pStatus = null;
pUpdated_date = null;
pUser = null;
}

void
SamiDeviceResource::cleanup() {
    if(pAuthorization != null) {
        
        delete pAuthorization;
        pAuthorization = null;
    }
if(pCondition != null) {
        
        delete pCondition;
        pCondition = null;
    }
if(pCreated_date != null) {
        
        delete pCreated_date;
        pCreated_date = null;
    }
if(pData != null) {
        pData->RemoveAll(true);
        delete pData;
        pData = null;
    }
if(pDescription != null) {
        
        delete pDescription;
        pDescription = null;
    }
if(pDevice_type != null) {
        
        delete pDevice_type;
        pDevice_type = null;
    }
if(pId != null) {
        
        delete pId;
        pId = null;
    }
if(pLocation != null) {
        
        delete pLocation;
        pLocation = null;
    }
if(pMac_address != null) {
        
        delete pMac_address;
        pMac_address = null;
    }
if(pMake != null) {
        
        delete pMake;
        pMake = null;
    }
if(pModel != null) {
        
        delete pModel;
        pModel = null;
    }
if(pName != null) {
        
        delete pName;
        pName = null;
    }
if(pOs != null) {
        
        delete pOs;
        pOs = null;
    }
if(pSerial != null) {
        
        delete pSerial;
        pSerial = null;
    }
if(pStatus != null) {
        
        delete pStatus;
        pStatus = null;
    }
if(pUpdated_date != null) {
        
        delete pUpdated_date;
        pUpdated_date = null;
    }
if(pUser != null) {
        
        delete pUser;
        pUser = null;
    }
}


SamiDeviceResource*
SamiDeviceResource::fromJson(String* json) {
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
SamiDeviceResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pAuthorizationKey = new JsonString(L"authorization");
        IJsonValue* pAuthorizationVal = null;
        pJsonObject->GetValue(pAuthorizationKey, pAuthorizationVal);
        if(pAuthorizationVal != null) {
            
            pAuthorization = new String();
            jsonToValue(pAuthorization, pAuthorizationVal, L"String", L"String");
        }
        delete pAuthorizationKey;
JsonString* pConditionKey = new JsonString(L"condition");
        IJsonValue* pConditionVal = null;
        pJsonObject->GetValue(pConditionKey, pConditionVal);
        if(pConditionVal != null) {
            
            pCondition = new String();
            jsonToValue(pCondition, pConditionVal, L"String", L"String");
        }
        delete pConditionKey;
JsonString* pCreated_dateKey = new JsonString(L"created_date");
        IJsonValue* pCreated_dateVal = null;
        pJsonObject->GetValue(pCreated_dateKey, pCreated_dateVal);
        if(pCreated_dateVal != null) {
            
            pCreated_date = new Long();
            jsonToValue(pCreated_date, pCreated_dateVal, L"Long", L"Long");
        }
        delete pCreated_dateKey;
JsonString* pDataKey = new JsonString(L"data");
        IJsonValue* pDataVal = null;
        pJsonObject->GetValue(pDataKey, pDataVal);
        if(pDataVal != null) {
            pData = new HashMap();
            
            jsonToValue(pData, pDataVal, L"HashMap", L"String");
        }
        delete pDataKey;
JsonString* pDescriptionKey = new JsonString(L"description");
        IJsonValue* pDescriptionVal = null;
        pJsonObject->GetValue(pDescriptionKey, pDescriptionVal);
        if(pDescriptionVal != null) {
            
            pDescription = new String();
            jsonToValue(pDescription, pDescriptionVal, L"String", L"String");
        }
        delete pDescriptionKey;
JsonString* pDevice_typeKey = new JsonString(L"device_type");
        IJsonValue* pDevice_typeVal = null;
        pJsonObject->GetValue(pDevice_typeKey, pDevice_typeVal);
        if(pDevice_typeVal != null) {
            
            pDevice_type = new String();
            jsonToValue(pDevice_type, pDevice_typeVal, L"String", L"String");
        }
        delete pDevice_typeKey;
JsonString* pIdKey = new JsonString(L"id");
        IJsonValue* pIdVal = null;
        pJsonObject->GetValue(pIdKey, pIdVal);
        if(pIdVal != null) {
            
            pId = new Integer();
            jsonToValue(pId, pIdVal, L"Integer", L"Integer");
        }
        delete pIdKey;
JsonString* pLocationKey = new JsonString(L"location");
        IJsonValue* pLocationVal = null;
        pJsonObject->GetValue(pLocationKey, pLocationVal);
        if(pLocationVal != null) {
            
            pLocation = new String();
            jsonToValue(pLocation, pLocationVal, L"String", L"String");
        }
        delete pLocationKey;
JsonString* pMac_addressKey = new JsonString(L"mac_address");
        IJsonValue* pMac_addressVal = null;
        pJsonObject->GetValue(pMac_addressKey, pMac_addressVal);
        if(pMac_addressVal != null) {
            
            pMac_address = new String();
            jsonToValue(pMac_address, pMac_addressVal, L"String", L"String");
        }
        delete pMac_addressKey;
JsonString* pMakeKey = new JsonString(L"make");
        IJsonValue* pMakeVal = null;
        pJsonObject->GetValue(pMakeKey, pMakeVal);
        if(pMakeVal != null) {
            
            pMake = new String();
            jsonToValue(pMake, pMakeVal, L"String", L"String");
        }
        delete pMakeKey;
JsonString* pModelKey = new JsonString(L"model");
        IJsonValue* pModelVal = null;
        pJsonObject->GetValue(pModelKey, pModelVal);
        if(pModelVal != null) {
            
            pModel = new String();
            jsonToValue(pModel, pModelVal, L"String", L"String");
        }
        delete pModelKey;
JsonString* pNameKey = new JsonString(L"name");
        IJsonValue* pNameVal = null;
        pJsonObject->GetValue(pNameKey, pNameVal);
        if(pNameVal != null) {
            
            pName = new String();
            jsonToValue(pName, pNameVal, L"String", L"String");
        }
        delete pNameKey;
JsonString* pOsKey = new JsonString(L"os");
        IJsonValue* pOsVal = null;
        pJsonObject->GetValue(pOsKey, pOsVal);
        if(pOsVal != null) {
            
            pOs = new String();
            jsonToValue(pOs, pOsVal, L"String", L"String");
        }
        delete pOsKey;
JsonString* pSerialKey = new JsonString(L"serial");
        IJsonValue* pSerialVal = null;
        pJsonObject->GetValue(pSerialKey, pSerialVal);
        if(pSerialVal != null) {
            
            pSerial = new String();
            jsonToValue(pSerial, pSerialVal, L"String", L"String");
        }
        delete pSerialKey;
JsonString* pStatusKey = new JsonString(L"status");
        IJsonValue* pStatusVal = null;
        pJsonObject->GetValue(pStatusKey, pStatusVal);
        if(pStatusVal != null) {
            
            pStatus = new String();
            jsonToValue(pStatus, pStatusVal, L"String", L"String");
        }
        delete pStatusKey;
JsonString* pUpdated_dateKey = new JsonString(L"updated_date");
        IJsonValue* pUpdated_dateVal = null;
        pJsonObject->GetValue(pUpdated_dateKey, pUpdated_dateVal);
        if(pUpdated_dateVal != null) {
            
            pUpdated_date = new Long();
            jsonToValue(pUpdated_date, pUpdated_dateVal, L"Long", L"Long");
        }
        delete pUpdated_dateKey;
JsonString* pUserKey = new JsonString(L"user");
        IJsonValue* pUserVal = null;
        pJsonObject->GetValue(pUserKey, pUserVal);
        if(pUserVal != null) {
            
            pUser = new SamiSimpleUserResource();
            jsonToValue(pUser, pUserVal, L"SamiSimpleUserResource", L"SamiSimpleUserResource");
        }
        delete pUserKey;
    }
}

SamiDeviceResource::SamiDeviceResource(String* json) {
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
SamiDeviceResource::asJson ()
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
SamiDeviceResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pAuthorizationKey = new JsonString(L"authorization");
    pJsonObject->Add(pAuthorizationKey, toJson(getPAuthorization(), "String", ""));

    JsonString *pConditionKey = new JsonString(L"condition");
    pJsonObject->Add(pConditionKey, toJson(getPCondition(), "String", ""));

    JsonString *pCreated_dateKey = new JsonString(L"created_date");
    pJsonObject->Add(pCreated_dateKey, toJson(getPCreatedDate(), "Long", ""));

    JsonString *pDataKey = new JsonString(L"data");
    pJsonObject->Add(pDataKey, toJson(getPData(), "String", "map"));

    JsonString *pDescriptionKey = new JsonString(L"description");
    pJsonObject->Add(pDescriptionKey, toJson(getPDescription(), "String", ""));

    JsonString *pDevice_typeKey = new JsonString(L"device_type");
    pJsonObject->Add(pDevice_typeKey, toJson(getPDeviceType(), "String", ""));

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "Integer", ""));

    JsonString *pLocationKey = new JsonString(L"location");
    pJsonObject->Add(pLocationKey, toJson(getPLocation(), "String", ""));

    JsonString *pMac_addressKey = new JsonString(L"mac_address");
    pJsonObject->Add(pMac_addressKey, toJson(getPMacAddress(), "String", ""));

    JsonString *pMakeKey = new JsonString(L"make");
    pJsonObject->Add(pMakeKey, toJson(getPMake(), "String", ""));

    JsonString *pModelKey = new JsonString(L"model");
    pJsonObject->Add(pModelKey, toJson(getPModel(), "String", ""));

    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    JsonString *pOsKey = new JsonString(L"os");
    pJsonObject->Add(pOsKey, toJson(getPOs(), "String", ""));

    JsonString *pSerialKey = new JsonString(L"serial");
    pJsonObject->Add(pSerialKey, toJson(getPSerial(), "String", ""));

    JsonString *pStatusKey = new JsonString(L"status");
    pJsonObject->Add(pStatusKey, toJson(getPStatus(), "String", ""));

    JsonString *pUpdated_dateKey = new JsonString(L"updated_date");
    pJsonObject->Add(pUpdated_dateKey, toJson(getPUpdatedDate(), "Long", ""));

    JsonString *pUserKey = new JsonString(L"user");
    pJsonObject->Add(pUserKey, toJson(getPUser(), "SamiSimpleUserResource", ""));

    return pJsonObject;
}

String*
SamiDeviceResource::getPAuthorization() {
    return pAuthorization;
}
void
SamiDeviceResource::setPAuthorization(String* pAuthorization) {
    this->pAuthorization = pAuthorization;
}

String*
SamiDeviceResource::getPCondition() {
    return pCondition;
}
void
SamiDeviceResource::setPCondition(String* pCondition) {
    this->pCondition = pCondition;
}

Long*
SamiDeviceResource::getPCreatedDate() {
    return pCreated_date;
}
void
SamiDeviceResource::setPCreatedDate(Long* pCreated_date) {
    this->pCreated_date = pCreated_date;
}

HashMap*
SamiDeviceResource::getPData() {
    return pData;
}
void
SamiDeviceResource::setPData(HashMap* pData) {
    this->pData = pData;
}

String*
SamiDeviceResource::getPDescription() {
    return pDescription;
}
void
SamiDeviceResource::setPDescription(String* pDescription) {
    this->pDescription = pDescription;
}

String*
SamiDeviceResource::getPDeviceType() {
    return pDevice_type;
}
void
SamiDeviceResource::setPDeviceType(String* pDevice_type) {
    this->pDevice_type = pDevice_type;
}

Integer*
SamiDeviceResource::getPId() {
    return pId;
}
void
SamiDeviceResource::setPId(Integer* pId) {
    this->pId = pId;
}

String*
SamiDeviceResource::getPLocation() {
    return pLocation;
}
void
SamiDeviceResource::setPLocation(String* pLocation) {
    this->pLocation = pLocation;
}

String*
SamiDeviceResource::getPMacAddress() {
    return pMac_address;
}
void
SamiDeviceResource::setPMacAddress(String* pMac_address) {
    this->pMac_address = pMac_address;
}

String*
SamiDeviceResource::getPMake() {
    return pMake;
}
void
SamiDeviceResource::setPMake(String* pMake) {
    this->pMake = pMake;
}

String*
SamiDeviceResource::getPModel() {
    return pModel;
}
void
SamiDeviceResource::setPModel(String* pModel) {
    this->pModel = pModel;
}

String*
SamiDeviceResource::getPName() {
    return pName;
}
void
SamiDeviceResource::setPName(String* pName) {
    this->pName = pName;
}

String*
SamiDeviceResource::getPOs() {
    return pOs;
}
void
SamiDeviceResource::setPOs(String* pOs) {
    this->pOs = pOs;
}

String*
SamiDeviceResource::getPSerial() {
    return pSerial;
}
void
SamiDeviceResource::setPSerial(String* pSerial) {
    this->pSerial = pSerial;
}

String*
SamiDeviceResource::getPStatus() {
    return pStatus;
}
void
SamiDeviceResource::setPStatus(String* pStatus) {
    this->pStatus = pStatus;
}

Long*
SamiDeviceResource::getPUpdatedDate() {
    return pUpdated_date;
}
void
SamiDeviceResource::setPUpdatedDate(Long* pUpdated_date) {
    this->pUpdated_date = pUpdated_date;
}

SamiSimpleUserResource*
SamiDeviceResource::getPUser() {
    return pUser;
}
void
SamiDeviceResource::setPUser(SamiSimpleUserResource* pUser) {
    this->pUser = pUser;
}



} /* namespace Swagger */

