
#include "SamiVideoTag.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiVideoTag::SamiVideoTag() {
    init();
}

SamiVideoTag::~SamiVideoTag() {
    this->cleanup();
}

void
SamiVideoTag::init() {
    pId = null;
pTag = null;
pVideo = null;
}

void
SamiVideoTag::cleanup() {
    if(pId != null) {
        
        delete pId;
        pId = null;
    }
if(pTag != null) {
        
        delete pTag;
        pTag = null;
    }
if(pVideo != null) {
        
        delete pVideo;
        pVideo = null;
    }
}


SamiVideoTag*
SamiVideoTag::fromJson(String* json) {
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
SamiVideoTag::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pIdKey = new JsonString(L"id");
        IJsonValue* pIdVal = null;
        pJsonObject->GetValue(pIdKey, pIdVal);
        if(pIdVal != null) {
            
            pId = new Long();
            jsonToValue(pId, pIdVal, L"Long", L"Long");
        }
        delete pIdKey;
JsonString* pTagKey = new JsonString(L"tag");
        IJsonValue* pTagVal = null;
        pJsonObject->GetValue(pTagKey, pTagVal);
        if(pTagVal != null) {
            
            pTag = new String();
            jsonToValue(pTag, pTagVal, L"String", L"String");
        }
        delete pTagKey;
JsonString* pVideoKey = new JsonString(L"video");
        IJsonValue* pVideoVal = null;
        pJsonObject->GetValue(pVideoKey, pVideoVal);
        if(pVideoVal != null) {
            
            pVideo = new SamiVideo();
            jsonToValue(pVideo, pVideoVal, L"SamiVideo", L"SamiVideo");
        }
        delete pVideoKey;
    }
}

SamiVideoTag::SamiVideoTag(String* json) {
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
SamiVideoTag::asJson ()
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
SamiVideoTag::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "Long", ""));

    JsonString *pTagKey = new JsonString(L"tag");
    pJsonObject->Add(pTagKey, toJson(getPTag(), "String", ""));

    JsonString *pVideoKey = new JsonString(L"video");
    pJsonObject->Add(pVideoKey, toJson(getPVideo(), "SamiVideo", ""));

    return pJsonObject;
}

Long*
SamiVideoTag::getPId() {
    return pId;
}
void
SamiVideoTag::setPId(Long* pId) {
    this->pId = pId;
}

String*
SamiVideoTag::getPTag() {
    return pTag;
}
void
SamiVideoTag::setPTag(String* pTag) {
    this->pTag = pTag;
}

SamiVideo*
SamiVideoTag::getPVideo() {
    return pVideo;
}
void
SamiVideoTag::setPVideo(SamiVideo* pVideo) {
    this->pVideo = pVideo;
}



} /* namespace Swagger */

