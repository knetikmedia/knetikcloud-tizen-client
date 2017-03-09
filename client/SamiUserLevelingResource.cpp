
#include "SamiUserLevelingResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiUserLevelingResource::SamiUserLevelingResource() {
    init();
}

SamiUserLevelingResource::~SamiUserLevelingResource() {
    this->cleanup();
}

void
SamiUserLevelingResource::init() {
    pLast_tier_name = null;
pLast_tier_progress = null;
pLevel_name = null;
pNext_tier_name = null;
pNext_tier_progress = null;
pProgress = null;
pTier_names = null;
pUser_id = null;
}

void
SamiUserLevelingResource::cleanup() {
    if(pLast_tier_name != null) {
        
        delete pLast_tier_name;
        pLast_tier_name = null;
    }
if(pLast_tier_progress != null) {
        
        delete pLast_tier_progress;
        pLast_tier_progress = null;
    }
if(pLevel_name != null) {
        
        delete pLevel_name;
        pLevel_name = null;
    }
if(pNext_tier_name != null) {
        
        delete pNext_tier_name;
        pNext_tier_name = null;
    }
if(pNext_tier_progress != null) {
        
        delete pNext_tier_progress;
        pNext_tier_progress = null;
    }
if(pProgress != null) {
        
        delete pProgress;
        pProgress = null;
    }
if(pTier_names != null) {
        pTier_names->RemoveAll(true);
        delete pTier_names;
        pTier_names = null;
    }
if(pUser_id != null) {
        
        delete pUser_id;
        pUser_id = null;
    }
}


SamiUserLevelingResource*
SamiUserLevelingResource::fromJson(String* json) {
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
SamiUserLevelingResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pLast_tier_nameKey = new JsonString(L"last_tier_name");
        IJsonValue* pLast_tier_nameVal = null;
        pJsonObject->GetValue(pLast_tier_nameKey, pLast_tier_nameVal);
        if(pLast_tier_nameVal != null) {
            
            pLast_tier_name = new String();
            jsonToValue(pLast_tier_name, pLast_tier_nameVal, L"String", L"String");
        }
        delete pLast_tier_nameKey;
JsonString* pLast_tier_progressKey = new JsonString(L"last_tier_progress");
        IJsonValue* pLast_tier_progressVal = null;
        pJsonObject->GetValue(pLast_tier_progressKey, pLast_tier_progressVal);
        if(pLast_tier_progressVal != null) {
            
            pLast_tier_progress = new Integer();
            jsonToValue(pLast_tier_progress, pLast_tier_progressVal, L"Integer", L"Integer");
        }
        delete pLast_tier_progressKey;
JsonString* pLevel_nameKey = new JsonString(L"level_name");
        IJsonValue* pLevel_nameVal = null;
        pJsonObject->GetValue(pLevel_nameKey, pLevel_nameVal);
        if(pLevel_nameVal != null) {
            
            pLevel_name = new String();
            jsonToValue(pLevel_name, pLevel_nameVal, L"String", L"String");
        }
        delete pLevel_nameKey;
JsonString* pNext_tier_nameKey = new JsonString(L"next_tier_name");
        IJsonValue* pNext_tier_nameVal = null;
        pJsonObject->GetValue(pNext_tier_nameKey, pNext_tier_nameVal);
        if(pNext_tier_nameVal != null) {
            
            pNext_tier_name = new String();
            jsonToValue(pNext_tier_name, pNext_tier_nameVal, L"String", L"String");
        }
        delete pNext_tier_nameKey;
JsonString* pNext_tier_progressKey = new JsonString(L"next_tier_progress");
        IJsonValue* pNext_tier_progressVal = null;
        pJsonObject->GetValue(pNext_tier_progressKey, pNext_tier_progressVal);
        if(pNext_tier_progressVal != null) {
            
            pNext_tier_progress = new Integer();
            jsonToValue(pNext_tier_progress, pNext_tier_progressVal, L"Integer", L"Integer");
        }
        delete pNext_tier_progressKey;
JsonString* pProgressKey = new JsonString(L"progress");
        IJsonValue* pProgressVal = null;
        pJsonObject->GetValue(pProgressKey, pProgressVal);
        if(pProgressVal != null) {
            
            pProgress = new Integer();
            jsonToValue(pProgress, pProgressVal, L"Integer", L"Integer");
        }
        delete pProgressKey;
JsonString* pTier_namesKey = new JsonString(L"tier_names");
        IJsonValue* pTier_namesVal = null;
        pJsonObject->GetValue(pTier_namesKey, pTier_namesVal);
        if(pTier_namesVal != null) {
            pTier_names = new ArrayList();
            
            jsonToValue(pTier_names, pTier_namesVal, L"IList", L"String");
        }
        delete pTier_namesKey;
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

SamiUserLevelingResource::SamiUserLevelingResource(String* json) {
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
SamiUserLevelingResource::asJson ()
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
SamiUserLevelingResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pLast_tier_nameKey = new JsonString(L"last_tier_name");
    pJsonObject->Add(pLast_tier_nameKey, toJson(getPLastTierName(), "String", ""));

    JsonString *pLast_tier_progressKey = new JsonString(L"last_tier_progress");
    pJsonObject->Add(pLast_tier_progressKey, toJson(getPLastTierProgress(), "Integer", ""));

    JsonString *pLevel_nameKey = new JsonString(L"level_name");
    pJsonObject->Add(pLevel_nameKey, toJson(getPLevelName(), "String", ""));

    JsonString *pNext_tier_nameKey = new JsonString(L"next_tier_name");
    pJsonObject->Add(pNext_tier_nameKey, toJson(getPNextTierName(), "String", ""));

    JsonString *pNext_tier_progressKey = new JsonString(L"next_tier_progress");
    pJsonObject->Add(pNext_tier_progressKey, toJson(getPNextTierProgress(), "Integer", ""));

    JsonString *pProgressKey = new JsonString(L"progress");
    pJsonObject->Add(pProgressKey, toJson(getPProgress(), "Integer", ""));

    JsonString *pTier_namesKey = new JsonString(L"tier_names");
    pJsonObject->Add(pTier_namesKey, toJson(getPTierNames(), "String", "array"));

    JsonString *pUser_idKey = new JsonString(L"user_id");
    pJsonObject->Add(pUser_idKey, toJson(getPUserId(), "Integer", ""));

    return pJsonObject;
}

String*
SamiUserLevelingResource::getPLastTierName() {
    return pLast_tier_name;
}
void
SamiUserLevelingResource::setPLastTierName(String* pLast_tier_name) {
    this->pLast_tier_name = pLast_tier_name;
}

Integer*
SamiUserLevelingResource::getPLastTierProgress() {
    return pLast_tier_progress;
}
void
SamiUserLevelingResource::setPLastTierProgress(Integer* pLast_tier_progress) {
    this->pLast_tier_progress = pLast_tier_progress;
}

String*
SamiUserLevelingResource::getPLevelName() {
    return pLevel_name;
}
void
SamiUserLevelingResource::setPLevelName(String* pLevel_name) {
    this->pLevel_name = pLevel_name;
}

String*
SamiUserLevelingResource::getPNextTierName() {
    return pNext_tier_name;
}
void
SamiUserLevelingResource::setPNextTierName(String* pNext_tier_name) {
    this->pNext_tier_name = pNext_tier_name;
}

Integer*
SamiUserLevelingResource::getPNextTierProgress() {
    return pNext_tier_progress;
}
void
SamiUserLevelingResource::setPNextTierProgress(Integer* pNext_tier_progress) {
    this->pNext_tier_progress = pNext_tier_progress;
}

Integer*
SamiUserLevelingResource::getPProgress() {
    return pProgress;
}
void
SamiUserLevelingResource::setPProgress(Integer* pProgress) {
    this->pProgress = pProgress;
}

IList*
SamiUserLevelingResource::getPTierNames() {
    return pTier_names;
}
void
SamiUserLevelingResource::setPTierNames(IList* pTier_names) {
    this->pTier_names = pTier_names;
}

Integer*
SamiUserLevelingResource::getPUserId() {
    return pUser_id;
}
void
SamiUserLevelingResource::setPUserId(Integer* pUser_id) {
    this->pUser_id = pUser_id;
}



} /* namespace Swagger */

