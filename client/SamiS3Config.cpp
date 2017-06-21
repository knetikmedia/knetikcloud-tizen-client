
#include "SamiS3Config.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiS3Config::SamiS3Config() {
    init();
}

SamiS3Config::~SamiS3Config() {
    this->cleanup();
}

void
SamiS3Config::init() {
    pBucket_name = null;
pCdn_url = null;
pRegion = null;
pUpload_prefix = null;
}

void
SamiS3Config::cleanup() {
    if(pBucket_name != null) {
        
        delete pBucket_name;
        pBucket_name = null;
    }
if(pCdn_url != null) {
        
        delete pCdn_url;
        pCdn_url = null;
    }
if(pRegion != null) {
        
        delete pRegion;
        pRegion = null;
    }
if(pUpload_prefix != null) {
        
        delete pUpload_prefix;
        pUpload_prefix = null;
    }
}


SamiS3Config*
SamiS3Config::fromJson(String* json) {
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
SamiS3Config::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pBucket_nameKey = new JsonString(L"bucket_name");
        IJsonValue* pBucket_nameVal = null;
        pJsonObject->GetValue(pBucket_nameKey, pBucket_nameVal);
        if(pBucket_nameVal != null) {
            
            pBucket_name = new String();
            jsonToValue(pBucket_name, pBucket_nameVal, L"String", L"String");
        }
        delete pBucket_nameKey;
JsonString* pCdn_urlKey = new JsonString(L"cdn_url");
        IJsonValue* pCdn_urlVal = null;
        pJsonObject->GetValue(pCdn_urlKey, pCdn_urlVal);
        if(pCdn_urlVal != null) {
            
            pCdn_url = new String();
            jsonToValue(pCdn_url, pCdn_urlVal, L"String", L"String");
        }
        delete pCdn_urlKey;
JsonString* pRegionKey = new JsonString(L"region");
        IJsonValue* pRegionVal = null;
        pJsonObject->GetValue(pRegionKey, pRegionVal);
        if(pRegionVal != null) {
            
            pRegion = new String();
            jsonToValue(pRegion, pRegionVal, L"String", L"String");
        }
        delete pRegionKey;
JsonString* pUpload_prefixKey = new JsonString(L"upload_prefix");
        IJsonValue* pUpload_prefixVal = null;
        pJsonObject->GetValue(pUpload_prefixKey, pUpload_prefixVal);
        if(pUpload_prefixVal != null) {
            
            pUpload_prefix = new String();
            jsonToValue(pUpload_prefix, pUpload_prefixVal, L"String", L"String");
        }
        delete pUpload_prefixKey;
    }
}

SamiS3Config::SamiS3Config(String* json) {
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
SamiS3Config::asJson ()
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
SamiS3Config::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pBucket_nameKey = new JsonString(L"bucket_name");
    pJsonObject->Add(pBucket_nameKey, toJson(getPBucketName(), "String", ""));

    JsonString *pCdn_urlKey = new JsonString(L"cdn_url");
    pJsonObject->Add(pCdn_urlKey, toJson(getPCdnUrl(), "String", ""));

    JsonString *pRegionKey = new JsonString(L"region");
    pJsonObject->Add(pRegionKey, toJson(getPRegion(), "String", ""));

    JsonString *pUpload_prefixKey = new JsonString(L"upload_prefix");
    pJsonObject->Add(pUpload_prefixKey, toJson(getPUploadPrefix(), "String", ""));

    return pJsonObject;
}

String*
SamiS3Config::getPBucketName() {
    return pBucket_name;
}
void
SamiS3Config::setPBucketName(String* pBucket_name) {
    this->pBucket_name = pBucket_name;
}

String*
SamiS3Config::getPCdnUrl() {
    return pCdn_url;
}
void
SamiS3Config::setPCdnUrl(String* pCdn_url) {
    this->pCdn_url = pCdn_url;
}

String*
SamiS3Config::getPRegion() {
    return pRegion;
}
void
SamiS3Config::setPRegion(String* pRegion) {
    this->pRegion = pRegion;
}

String*
SamiS3Config::getPUploadPrefix() {
    return pUpload_prefix;
}
void
SamiS3Config::setPUploadPrefix(String* pUpload_prefix) {
    this->pUpload_prefix = pUpload_prefix;
}



} /* namespace Swagger */

