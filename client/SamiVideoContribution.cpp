
#include "SamiVideoContribution.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiVideoContribution::SamiVideoContribution() {
    init();
}

SamiVideoContribution::~SamiVideoContribution() {
    this->cleanup();
}

void
SamiVideoContribution::init() {
    pArtist = null;
pId = null;
pMedia = null;
pRole = null;
}

void
SamiVideoContribution::cleanup() {
    if(pArtist != null) {
        
        delete pArtist;
        pArtist = null;
    }
if(pId != null) {
        
        delete pId;
        pId = null;
    }
if(pMedia != null) {
        
        delete pMedia;
        pMedia = null;
    }
if(pRole != null) {
        
        delete pRole;
        pRole = null;
    }
}


SamiVideoContribution*
SamiVideoContribution::fromJson(String* json) {
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
SamiVideoContribution::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pArtistKey = new JsonString(L"artist");
        IJsonValue* pArtistVal = null;
        pJsonObject->GetValue(pArtistKey, pArtistVal);
        if(pArtistVal != null) {
            
            pArtist = new SamiArtist();
            jsonToValue(pArtist, pArtistVal, L"SamiArtist", L"SamiArtist");
        }
        delete pArtistKey;
JsonString* pIdKey = new JsonString(L"id");
        IJsonValue* pIdVal = null;
        pJsonObject->GetValue(pIdKey, pIdVal);
        if(pIdVal != null) {
            
            pId = new Integer();
            jsonToValue(pId, pIdVal, L"Integer", L"Integer");
        }
        delete pIdKey;
JsonString* pMediaKey = new JsonString(L"media");
        IJsonValue* pMediaVal = null;
        pJsonObject->GetValue(pMediaKey, pMediaVal);
        if(pMediaVal != null) {
            
            pMedia = new SamiVideo();
            jsonToValue(pMedia, pMediaVal, L"SamiVideo", L"SamiVideo");
        }
        delete pMediaKey;
JsonString* pRoleKey = new JsonString(L"role");
        IJsonValue* pRoleVal = null;
        pJsonObject->GetValue(pRoleKey, pRoleVal);
        if(pRoleVal != null) {
            
            pRole = new String();
            jsonToValue(pRole, pRoleVal, L"String", L"String");
        }
        delete pRoleKey;
    }
}

SamiVideoContribution::SamiVideoContribution(String* json) {
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
SamiVideoContribution::asJson ()
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
SamiVideoContribution::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pArtistKey = new JsonString(L"artist");
    pJsonObject->Add(pArtistKey, toJson(getPArtist(), "SamiArtist", ""));

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "Integer", ""));

    JsonString *pMediaKey = new JsonString(L"media");
    pJsonObject->Add(pMediaKey, toJson(getPMedia(), "SamiVideo", ""));

    JsonString *pRoleKey = new JsonString(L"role");
    pJsonObject->Add(pRoleKey, toJson(getPRole(), "String", ""));

    return pJsonObject;
}

SamiArtist*
SamiVideoContribution::getPArtist() {
    return pArtist;
}
void
SamiVideoContribution::setPArtist(SamiArtist* pArtist) {
    this->pArtist = pArtist;
}

Integer*
SamiVideoContribution::getPId() {
    return pId;
}
void
SamiVideoContribution::setPId(Integer* pId) {
    this->pId = pId;
}

SamiVideo*
SamiVideoContribution::getPMedia() {
    return pMedia;
}
void
SamiVideoContribution::setPMedia(SamiVideo* pMedia) {
    this->pMedia = pMedia;
}

String*
SamiVideoContribution::getPRole() {
    return pRole;
}
void
SamiVideoContribution::setPRole(String* pRole) {
    this->pRole = pRole;
}



} /* namespace Swagger */

