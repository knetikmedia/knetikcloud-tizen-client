
#include "SamiVideoRelationshipResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiVideoRelationshipResource::SamiVideoRelationshipResource() {
    init();
}

SamiVideoRelationshipResource::~SamiVideoRelationshipResource() {
    this->cleanup();
}

void
SamiVideoRelationshipResource::init() {
    pFrom = null;
pId = null;
pRelationship_details = null;
pTo = null;
}

void
SamiVideoRelationshipResource::cleanup() {
    if(pFrom != null) {
        
        delete pFrom;
        pFrom = null;
    }
if(pId != null) {
        
        delete pId;
        pId = null;
    }
if(pRelationship_details != null) {
        
        delete pRelationship_details;
        pRelationship_details = null;
    }
if(pTo != null) {
        
        delete pTo;
        pTo = null;
    }
}


SamiVideoRelationshipResource*
SamiVideoRelationshipResource::fromJson(String* json) {
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
SamiVideoRelationshipResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pFromKey = new JsonString(L"from");
        IJsonValue* pFromVal = null;
        pJsonObject->GetValue(pFromKey, pFromVal);
        if(pFromVal != null) {
            
            pFrom = new SamiSimpleReferenceResource«long»();
            jsonToValue(pFrom, pFromVal, L"SamiSimpleReferenceResource«long»", L"SamiSimpleReferenceResource«long»");
        }
        delete pFromKey;
JsonString* pIdKey = new JsonString(L"id");
        IJsonValue* pIdVal = null;
        pJsonObject->GetValue(pIdKey, pIdVal);
        if(pIdVal != null) {
            
            pId = new Long();
            jsonToValue(pId, pIdVal, L"Long", L"Long");
        }
        delete pIdKey;
JsonString* pRelationship_detailsKey = new JsonString(L"relationship_details");
        IJsonValue* pRelationship_detailsVal = null;
        pJsonObject->GetValue(pRelationship_detailsKey, pRelationship_detailsVal);
        if(pRelationship_detailsVal != null) {
            
            pRelationship_details = new String();
            jsonToValue(pRelationship_details, pRelationship_detailsVal, L"String", L"String");
        }
        delete pRelationship_detailsKey;
JsonString* pToKey = new JsonString(L"to");
        IJsonValue* pToVal = null;
        pJsonObject->GetValue(pToKey, pToVal);
        if(pToVal != null) {
            
            pTo = new SamiSimpleReferenceResource«long»();
            jsonToValue(pTo, pToVal, L"SamiSimpleReferenceResource«long»", L"SamiSimpleReferenceResource«long»");
        }
        delete pToKey;
    }
}

SamiVideoRelationshipResource::SamiVideoRelationshipResource(String* json) {
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
SamiVideoRelationshipResource::asJson ()
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
SamiVideoRelationshipResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pFromKey = new JsonString(L"from");
    pJsonObject->Add(pFromKey, toJson(getPFrom(), "SamiSimpleReferenceResource«long»", ""));

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "Long", ""));

    JsonString *pRelationship_detailsKey = new JsonString(L"relationship_details");
    pJsonObject->Add(pRelationship_detailsKey, toJson(getPRelationshipDetails(), "String", ""));

    JsonString *pToKey = new JsonString(L"to");
    pJsonObject->Add(pToKey, toJson(getPTo(), "SamiSimpleReferenceResource«long»", ""));

    return pJsonObject;
}

SamiSimpleReferenceResource«long»*
SamiVideoRelationshipResource::getPFrom() {
    return pFrom;
}
void
SamiVideoRelationshipResource::setPFrom(SamiSimpleReferenceResource«long»* pFrom) {
    this->pFrom = pFrom;
}

Long*
SamiVideoRelationshipResource::getPId() {
    return pId;
}
void
SamiVideoRelationshipResource::setPId(Long* pId) {
    this->pId = pId;
}

String*
SamiVideoRelationshipResource::getPRelationshipDetails() {
    return pRelationship_details;
}
void
SamiVideoRelationshipResource::setPRelationshipDetails(String* pRelationship_details) {
    this->pRelationship_details = pRelationship_details;
}

SamiSimpleReferenceResource«long»*
SamiVideoRelationshipResource::getPTo() {
    return pTo;
}
void
SamiVideoRelationshipResource::setPTo(SamiSimpleReferenceResource«long»* pTo) {
    this->pTo = pTo;
}



} /* namespace Swagger */

