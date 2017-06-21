
#include "SamiGuestPlayable.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiGuestPlayable::SamiGuestPlayable() {
    init();
}

SamiGuestPlayable::~SamiGuestPlayable() {
    this->cleanup();
}

void
SamiGuestPlayable::init() {
    pDescription = null;
pType_hint = null;
pAllowed = null;
pLeaderboard = null;
}

void
SamiGuestPlayable::cleanup() {
    if(pDescription != null) {
        
        delete pDescription;
        pDescription = null;
    }
if(pType_hint != null) {
        
        delete pType_hint;
        pType_hint = null;
    }
if(pAllowed != null) {
        
        delete pAllowed;
        pAllowed = null;
    }
if(pLeaderboard != null) {
        
        delete pLeaderboard;
        pLeaderboard = null;
    }
}


SamiGuestPlayable*
SamiGuestPlayable::fromJson(String* json) {
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
SamiGuestPlayable::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pDescriptionKey = new JsonString(L"description");
        IJsonValue* pDescriptionVal = null;
        pJsonObject->GetValue(pDescriptionKey, pDescriptionVal);
        if(pDescriptionVal != null) {
            
            pDescription = new String();
            jsonToValue(pDescription, pDescriptionVal, L"String", L"String");
        }
        delete pDescriptionKey;
JsonString* pType_hintKey = new JsonString(L"type_hint");
        IJsonValue* pType_hintVal = null;
        pJsonObject->GetValue(pType_hintKey, pType_hintVal);
        if(pType_hintVal != null) {
            
            pType_hint = new String();
            jsonToValue(pType_hint, pType_hintVal, L"String", L"String");
        }
        delete pType_hintKey;
JsonString* pAllowedKey = new JsonString(L"allowed");
        IJsonValue* pAllowedVal = null;
        pJsonObject->GetValue(pAllowedKey, pAllowedVal);
        if(pAllowedVal != null) {
            
            pAllowed = new Boolean(false);
            jsonToValue(pAllowed, pAllowedVal, L"Boolean", L"Boolean");
        }
        delete pAllowedKey;
JsonString* pLeaderboardKey = new JsonString(L"leaderboard");
        IJsonValue* pLeaderboardVal = null;
        pJsonObject->GetValue(pLeaderboardKey, pLeaderboardVal);
        if(pLeaderboardVal != null) {
            
            pLeaderboard = new Boolean(false);
            jsonToValue(pLeaderboard, pLeaderboardVal, L"Boolean", L"Boolean");
        }
        delete pLeaderboardKey;
    }
}

SamiGuestPlayable::SamiGuestPlayable(String* json) {
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
SamiGuestPlayable::asJson ()
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
SamiGuestPlayable::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pDescriptionKey = new JsonString(L"description");
    pJsonObject->Add(pDescriptionKey, toJson(getPDescription(), "String", ""));

    JsonString *pType_hintKey = new JsonString(L"type_hint");
    pJsonObject->Add(pType_hintKey, toJson(getPTypeHint(), "String", ""));

    JsonString *pAllowedKey = new JsonString(L"allowed");
    pJsonObject->Add(pAllowedKey, toJson(getPAllowed(), "Boolean", ""));

    JsonString *pLeaderboardKey = new JsonString(L"leaderboard");
    pJsonObject->Add(pLeaderboardKey, toJson(getPLeaderboard(), "Boolean", ""));

    return pJsonObject;
}

String*
SamiGuestPlayable::getPDescription() {
    return pDescription;
}
void
SamiGuestPlayable::setPDescription(String* pDescription) {
    this->pDescription = pDescription;
}

String*
SamiGuestPlayable::getPTypeHint() {
    return pType_hint;
}
void
SamiGuestPlayable::setPTypeHint(String* pType_hint) {
    this->pType_hint = pType_hint;
}

Boolean*
SamiGuestPlayable::getPAllowed() {
    return pAllowed;
}
void
SamiGuestPlayable::setPAllowed(Boolean* pAllowed) {
    this->pAllowed = pAllowed;
}

Boolean*
SamiGuestPlayable::getPLeaderboard() {
    return pLeaderboard;
}
void
SamiGuestPlayable::setPLeaderboard(Boolean* pLeaderboard) {
    this->pLeaderboard = pLeaderboard;
}



} /* namespace Swagger */

