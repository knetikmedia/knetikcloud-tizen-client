
#include "SamiImportJobResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiImportJobResource::SamiImportJobResource() {
    init();
}

SamiImportJobResource::~SamiImportJobResource() {
    this->cleanup();
}

void
SamiImportJobResource::init() {
    pCategory_id = null;
pCreated_date = null;
pId = null;
pName = null;
pOutput = null;
pRecord_count = null;
pStatus = null;
pUpdated_date = null;
pUrl = null;
pVendor = null;
}

void
SamiImportJobResource::cleanup() {
    if(pCategory_id != null) {
        
        delete pCategory_id;
        pCategory_id = null;
    }
if(pCreated_date != null) {
        
        delete pCreated_date;
        pCreated_date = null;
    }
if(pId != null) {
        
        delete pId;
        pId = null;
    }
if(pName != null) {
        
        delete pName;
        pName = null;
    }
if(pOutput != null) {
        pOutput->RemoveAll(true);
        delete pOutput;
        pOutput = null;
    }
if(pRecord_count != null) {
        
        delete pRecord_count;
        pRecord_count = null;
    }
if(pStatus != null) {
        
        delete pStatus;
        pStatus = null;
    }
if(pUpdated_date != null) {
        
        delete pUpdated_date;
        pUpdated_date = null;
    }
if(pUrl != null) {
        
        delete pUrl;
        pUrl = null;
    }
if(pVendor != null) {
        
        delete pVendor;
        pVendor = null;
    }
}


SamiImportJobResource*
SamiImportJobResource::fromJson(String* json) {
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
SamiImportJobResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pCategory_idKey = new JsonString(L"category_id");
        IJsonValue* pCategory_idVal = null;
        pJsonObject->GetValue(pCategory_idKey, pCategory_idVal);
        if(pCategory_idVal != null) {
            
            pCategory_id = new String();
            jsonToValue(pCategory_id, pCategory_idVal, L"String", L"String");
        }
        delete pCategory_idKey;
JsonString* pCreated_dateKey = new JsonString(L"created_date");
        IJsonValue* pCreated_dateVal = null;
        pJsonObject->GetValue(pCreated_dateKey, pCreated_dateVal);
        if(pCreated_dateVal != null) {
            
            pCreated_date = new Long();
            jsonToValue(pCreated_date, pCreated_dateVal, L"Long", L"Long");
        }
        delete pCreated_dateKey;
JsonString* pIdKey = new JsonString(L"id");
        IJsonValue* pIdVal = null;
        pJsonObject->GetValue(pIdKey, pIdVal);
        if(pIdVal != null) {
            
            pId = new Long();
            jsonToValue(pId, pIdVal, L"Long", L"Long");
        }
        delete pIdKey;
JsonString* pNameKey = new JsonString(L"name");
        IJsonValue* pNameVal = null;
        pJsonObject->GetValue(pNameKey, pNameVal);
        if(pNameVal != null) {
            
            pName = new String();
            jsonToValue(pName, pNameVal, L"String", L"String");
        }
        delete pNameKey;
JsonString* pOutputKey = new JsonString(L"output");
        IJsonValue* pOutputVal = null;
        pJsonObject->GetValue(pOutputKey, pOutputVal);
        if(pOutputVal != null) {
            pOutput = new ArrayList();
            
            jsonToValue(pOutput, pOutputVal, L"IList", L"SamiImportJobOutputResource");
        }
        delete pOutputKey;
JsonString* pRecord_countKey = new JsonString(L"record_count");
        IJsonValue* pRecord_countVal = null;
        pJsonObject->GetValue(pRecord_countKey, pRecord_countVal);
        if(pRecord_countVal != null) {
            
            pRecord_count = new Long();
            jsonToValue(pRecord_count, pRecord_countVal, L"Long", L"Long");
        }
        delete pRecord_countKey;
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
JsonString* pUrlKey = new JsonString(L"url");
        IJsonValue* pUrlVal = null;
        pJsonObject->GetValue(pUrlKey, pUrlVal);
        if(pUrlVal != null) {
            
            pUrl = new String();
            jsonToValue(pUrl, pUrlVal, L"String", L"String");
        }
        delete pUrlKey;
JsonString* pVendorKey = new JsonString(L"vendor");
        IJsonValue* pVendorVal = null;
        pJsonObject->GetValue(pVendorKey, pVendorVal);
        if(pVendorVal != null) {
            
            pVendor = new String();
            jsonToValue(pVendor, pVendorVal, L"String", L"String");
        }
        delete pVendorKey;
    }
}

SamiImportJobResource::SamiImportJobResource(String* json) {
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
SamiImportJobResource::asJson ()
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
SamiImportJobResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pCategory_idKey = new JsonString(L"category_id");
    pJsonObject->Add(pCategory_idKey, toJson(getPCategoryId(), "String", ""));

    JsonString *pCreated_dateKey = new JsonString(L"created_date");
    pJsonObject->Add(pCreated_dateKey, toJson(getPCreatedDate(), "Long", ""));

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "Long", ""));

    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    JsonString *pOutputKey = new JsonString(L"output");
    pJsonObject->Add(pOutputKey, toJson(getPOutput(), "SamiImportJobOutputResource", "array"));

    JsonString *pRecord_countKey = new JsonString(L"record_count");
    pJsonObject->Add(pRecord_countKey, toJson(getPRecordCount(), "Long", ""));

    JsonString *pStatusKey = new JsonString(L"status");
    pJsonObject->Add(pStatusKey, toJson(getPStatus(), "String", ""));

    JsonString *pUpdated_dateKey = new JsonString(L"updated_date");
    pJsonObject->Add(pUpdated_dateKey, toJson(getPUpdatedDate(), "Long", ""));

    JsonString *pUrlKey = new JsonString(L"url");
    pJsonObject->Add(pUrlKey, toJson(getPUrl(), "String", ""));

    JsonString *pVendorKey = new JsonString(L"vendor");
    pJsonObject->Add(pVendorKey, toJson(getPVendor(), "String", ""));

    return pJsonObject;
}

String*
SamiImportJobResource::getPCategoryId() {
    return pCategory_id;
}
void
SamiImportJobResource::setPCategoryId(String* pCategory_id) {
    this->pCategory_id = pCategory_id;
}

Long*
SamiImportJobResource::getPCreatedDate() {
    return pCreated_date;
}
void
SamiImportJobResource::setPCreatedDate(Long* pCreated_date) {
    this->pCreated_date = pCreated_date;
}

Long*
SamiImportJobResource::getPId() {
    return pId;
}
void
SamiImportJobResource::setPId(Long* pId) {
    this->pId = pId;
}

String*
SamiImportJobResource::getPName() {
    return pName;
}
void
SamiImportJobResource::setPName(String* pName) {
    this->pName = pName;
}

IList*
SamiImportJobResource::getPOutput() {
    return pOutput;
}
void
SamiImportJobResource::setPOutput(IList* pOutput) {
    this->pOutput = pOutput;
}

Long*
SamiImportJobResource::getPRecordCount() {
    return pRecord_count;
}
void
SamiImportJobResource::setPRecordCount(Long* pRecord_count) {
    this->pRecord_count = pRecord_count;
}

String*
SamiImportJobResource::getPStatus() {
    return pStatus;
}
void
SamiImportJobResource::setPStatus(String* pStatus) {
    this->pStatus = pStatus;
}

Long*
SamiImportJobResource::getPUpdatedDate() {
    return pUpdated_date;
}
void
SamiImportJobResource::setPUpdatedDate(Long* pUpdated_date) {
    this->pUpdated_date = pUpdated_date;
}

String*
SamiImportJobResource::getPUrl() {
    return pUrl;
}
void
SamiImportJobResource::setPUrl(String* pUrl) {
    this->pUrl = pUrl;
}

String*
SamiImportJobResource::getPVendor() {
    return pVendor;
}
void
SamiImportJobResource::setPVendor(String* pVendor) {
    this->pVendor = pVendor;
}



} /* namespace Swagger */

