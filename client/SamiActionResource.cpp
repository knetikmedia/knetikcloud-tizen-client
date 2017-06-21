
#include "SamiActionResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiActionResource::SamiActionResource() {
    init();
}

SamiActionResource::~SamiActionResource() {
    this->cleanup();
}

void
SamiActionResource::init() {
    pCategory = null;
pDescription = null;
pName = null;
pTags = null;
pVariables = null;
}

void
SamiActionResource::cleanup() {
    if(pCategory != null) {
        
        delete pCategory;
        pCategory = null;
    }
if(pDescription != null) {
        
        delete pDescription;
        pDescription = null;
    }
if(pName != null) {
        
        delete pName;
        pName = null;
    }
if(pTags != null) {
        pTags->RemoveAll(true);
        delete pTags;
        pTags = null;
    }
if(pVariables != null) {
        pVariables->RemoveAll(true);
        delete pVariables;
        pVariables = null;
    }
}


SamiActionResource*
SamiActionResource::fromJson(String* json) {
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
SamiActionResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pCategoryKey = new JsonString(L"category");
        IJsonValue* pCategoryVal = null;
        pJsonObject->GetValue(pCategoryKey, pCategoryVal);
        if(pCategoryVal != null) {
            
            pCategory = new String();
            jsonToValue(pCategory, pCategoryVal, L"String", L"String");
        }
        delete pCategoryKey;
JsonString* pDescriptionKey = new JsonString(L"description");
        IJsonValue* pDescriptionVal = null;
        pJsonObject->GetValue(pDescriptionKey, pDescriptionVal);
        if(pDescriptionVal != null) {
            
            pDescription = new String();
            jsonToValue(pDescription, pDescriptionVal, L"String", L"String");
        }
        delete pDescriptionKey;
JsonString* pNameKey = new JsonString(L"name");
        IJsonValue* pNameVal = null;
        pJsonObject->GetValue(pNameKey, pNameVal);
        if(pNameVal != null) {
            
            pName = new String();
            jsonToValue(pName, pNameVal, L"String", L"String");
        }
        delete pNameKey;
JsonString* pTagsKey = new JsonString(L"tags");
        IJsonValue* pTagsVal = null;
        pJsonObject->GetValue(pTagsKey, pTagsVal);
        if(pTagsVal != null) {
            pTags = new ArrayList();
            
            jsonToValue(pTags, pTagsVal, L"IList", L"String");
        }
        delete pTagsKey;
JsonString* pVariablesKey = new JsonString(L"variables");
        IJsonValue* pVariablesVal = null;
        pJsonObject->GetValue(pVariablesKey, pVariablesVal);
        if(pVariablesVal != null) {
            pVariables = new ArrayList();
            
            jsonToValue(pVariables, pVariablesVal, L"IList", L"SamiActionVariableResource");
        }
        delete pVariablesKey;
    }
}

SamiActionResource::SamiActionResource(String* json) {
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
SamiActionResource::asJson ()
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
SamiActionResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pCategoryKey = new JsonString(L"category");
    pJsonObject->Add(pCategoryKey, toJson(getPCategory(), "String", ""));

    JsonString *pDescriptionKey = new JsonString(L"description");
    pJsonObject->Add(pDescriptionKey, toJson(getPDescription(), "String", ""));

    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    JsonString *pTagsKey = new JsonString(L"tags");
    pJsonObject->Add(pTagsKey, toJson(getPTags(), "String", "array"));

    JsonString *pVariablesKey = new JsonString(L"variables");
    pJsonObject->Add(pVariablesKey, toJson(getPVariables(), "SamiActionVariableResource", "array"));

    return pJsonObject;
}

String*
SamiActionResource::getPCategory() {
    return pCategory;
}
void
SamiActionResource::setPCategory(String* pCategory) {
    this->pCategory = pCategory;
}

String*
SamiActionResource::getPDescription() {
    return pDescription;
}
void
SamiActionResource::setPDescription(String* pDescription) {
    this->pDescription = pDescription;
}

String*
SamiActionResource::getPName() {
    return pName;
}
void
SamiActionResource::setPName(String* pName) {
    this->pName = pName;
}

IList*
SamiActionResource::getPTags() {
    return pTags;
}
void
SamiActionResource::setPTags(IList* pTags) {
    this->pTags = pTags;
}

IList*
SamiActionResource::getPVariables() {
    return pVariables;
}
void
SamiActionResource::setPVariables(IList* pVariables) {
    this->pVariables = pVariables;
}



} /* namespace Swagger */

