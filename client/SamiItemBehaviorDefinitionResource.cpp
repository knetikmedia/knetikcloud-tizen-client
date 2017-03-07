
#include "SamiItemBehaviorDefinitionResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiItemBehaviorDefinitionResource::SamiItemBehaviorDefinitionResource() {
    init();
}

SamiItemBehaviorDefinitionResource::~SamiItemBehaviorDefinitionResource() {
    this->cleanup();
}

void
SamiItemBehaviorDefinitionResource::init() {
    pBehavior = null;
pModifiable = null;
pRequired = null;
}

void
SamiItemBehaviorDefinitionResource::cleanup() {
    if(pBehavior != null) {
        
        delete pBehavior;
        pBehavior = null;
    }
if(pModifiable != null) {
        
        delete pModifiable;
        pModifiable = null;
    }
if(pRequired != null) {
        
        delete pRequired;
        pRequired = null;
    }
}


SamiItemBehaviorDefinitionResource*
SamiItemBehaviorDefinitionResource::fromJson(String* json) {
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
SamiItemBehaviorDefinitionResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pBehaviorKey = new JsonString(L"behavior");
        IJsonValue* pBehaviorVal = null;
        pJsonObject->GetValue(pBehaviorKey, pBehaviorVal);
        if(pBehaviorVal != null) {
            
            pBehavior = new SamiBehavior();
            jsonToValue(pBehavior, pBehaviorVal, L"SamiBehavior", L"SamiBehavior");
        }
        delete pBehaviorKey;
JsonString* pModifiableKey = new JsonString(L"modifiable");
        IJsonValue* pModifiableVal = null;
        pJsonObject->GetValue(pModifiableKey, pModifiableVal);
        if(pModifiableVal != null) {
            
            pModifiable = new Boolean(false);
            jsonToValue(pModifiable, pModifiableVal, L"Boolean", L"Boolean");
        }
        delete pModifiableKey;
JsonString* pRequiredKey = new JsonString(L"required");
        IJsonValue* pRequiredVal = null;
        pJsonObject->GetValue(pRequiredKey, pRequiredVal);
        if(pRequiredVal != null) {
            
            pRequired = new Boolean(false);
            jsonToValue(pRequired, pRequiredVal, L"Boolean", L"Boolean");
        }
        delete pRequiredKey;
    }
}

SamiItemBehaviorDefinitionResource::SamiItemBehaviorDefinitionResource(String* json) {
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
SamiItemBehaviorDefinitionResource::asJson ()
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
SamiItemBehaviorDefinitionResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pBehaviorKey = new JsonString(L"behavior");
    pJsonObject->Add(pBehaviorKey, toJson(getPBehavior(), "SamiBehavior", ""));

    JsonString *pModifiableKey = new JsonString(L"modifiable");
    pJsonObject->Add(pModifiableKey, toJson(getPModifiable(), "Boolean", ""));

    JsonString *pRequiredKey = new JsonString(L"required");
    pJsonObject->Add(pRequiredKey, toJson(getPRequired(), "Boolean", ""));

    return pJsonObject;
}

SamiBehavior*
SamiItemBehaviorDefinitionResource::getPBehavior() {
    return pBehavior;
}
void
SamiItemBehaviorDefinitionResource::setPBehavior(SamiBehavior* pBehavior) {
    this->pBehavior = pBehavior;
}

Boolean*
SamiItemBehaviorDefinitionResource::getPModifiable() {
    return pModifiable;
}
void
SamiItemBehaviorDefinitionResource::setPModifiable(Boolean* pModifiable) {
    this->pModifiable = pModifiable;
}

Boolean*
SamiItemBehaviorDefinitionResource::getPRequired() {
    return pRequired;
}
void
SamiItemBehaviorDefinitionResource::setPRequired(Boolean* pRequired) {
    this->pRequired = pRequired;
}



} /* namespace Swagger */

