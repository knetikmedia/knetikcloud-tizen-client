
#include "SamiContributionResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiContributionResource::SamiContributionResource() {
    init();
}

SamiContributionResource::~SamiContributionResource() {
    this->cleanup();
}

void
SamiContributionResource::init() {
    pArtist = null;
pMedia = null;
pRole = null;
}

void
SamiContributionResource::cleanup() {
    if(pArtist != null) {
        
        delete pArtist;
        pArtist = null;
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


SamiContributionResource*
SamiContributionResource::fromJson(String* json) {
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
SamiContributionResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pArtistKey = new JsonString(L"artist");
        IJsonValue* pArtistVal = null;
        pJsonObject->GetValue(pArtistKey, pArtistVal);
        if(pArtistVal != null) {
            
            pArtist = new SamiSimpleReferenceResource«long»();
            jsonToValue(pArtist, pArtistVal, L"SamiSimpleReferenceResource«long»", L"SamiSimpleReferenceResource«long»");
        }
        delete pArtistKey;
JsonString* pMediaKey = new JsonString(L"media");
        IJsonValue* pMediaVal = null;
        pJsonObject->GetValue(pMediaKey, pMediaVal);
        if(pMediaVal != null) {
            
            pMedia = new SamiSimpleReferenceResource«long»();
            jsonToValue(pMedia, pMediaVal, L"SamiSimpleReferenceResource«long»", L"SamiSimpleReferenceResource«long»");
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

SamiContributionResource::SamiContributionResource(String* json) {
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
SamiContributionResource::asJson ()
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
SamiContributionResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pArtistKey = new JsonString(L"artist");
    pJsonObject->Add(pArtistKey, toJson(getPArtist(), "SamiSimpleReferenceResource«long»", ""));

    JsonString *pMediaKey = new JsonString(L"media");
    pJsonObject->Add(pMediaKey, toJson(getPMedia(), "SamiSimpleReferenceResource«long»", ""));

    JsonString *pRoleKey = new JsonString(L"role");
    pJsonObject->Add(pRoleKey, toJson(getPRole(), "String", ""));

    return pJsonObject;
}

SamiSimpleReferenceResource«long»*
SamiContributionResource::getPArtist() {
    return pArtist;
}
void
SamiContributionResource::setPArtist(SamiSimpleReferenceResource«long»* pArtist) {
    this->pArtist = pArtist;
}

SamiSimpleReferenceResource«long»*
SamiContributionResource::getPMedia() {
    return pMedia;
}
void
SamiContributionResource::setPMedia(SamiSimpleReferenceResource«long»* pMedia) {
    this->pMedia = pMedia;
}

String*
SamiContributionResource::getPRole() {
    return pRole;
}
void
SamiContributionResource::setPRole(String* pRole) {
    this->pRole = pRole;
}



} /* namespace Swagger */

