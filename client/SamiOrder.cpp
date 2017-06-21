
#include "SamiOrder.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiOrder::SamiOrder() {
    init();
}

SamiOrder::~SamiOrder() {
    this->cleanup();
}

void
SamiOrder::init() {
    pAscending = null;
pDirection = null;
pIgnore_case = null;
pNull_handling = null;
pProperty = null;
}

void
SamiOrder::cleanup() {
    if(pAscending != null) {
        
        delete pAscending;
        pAscending = null;
    }
if(pDirection != null) {
        
        delete pDirection;
        pDirection = null;
    }
if(pIgnore_case != null) {
        
        delete pIgnore_case;
        pIgnore_case = null;
    }
if(pNull_handling != null) {
        
        delete pNull_handling;
        pNull_handling = null;
    }
if(pProperty != null) {
        
        delete pProperty;
        pProperty = null;
    }
}


SamiOrder*
SamiOrder::fromJson(String* json) {
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
SamiOrder::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pAscendingKey = new JsonString(L"ascending");
        IJsonValue* pAscendingVal = null;
        pJsonObject->GetValue(pAscendingKey, pAscendingVal);
        if(pAscendingVal != null) {
            
            pAscending = new Boolean(false);
            jsonToValue(pAscending, pAscendingVal, L"Boolean", L"Boolean");
        }
        delete pAscendingKey;
JsonString* pDirectionKey = new JsonString(L"direction");
        IJsonValue* pDirectionVal = null;
        pJsonObject->GetValue(pDirectionKey, pDirectionVal);
        if(pDirectionVal != null) {
            
            pDirection = new String();
            jsonToValue(pDirection, pDirectionVal, L"String", L"String");
        }
        delete pDirectionKey;
JsonString* pIgnore_caseKey = new JsonString(L"ignore_case");
        IJsonValue* pIgnore_caseVal = null;
        pJsonObject->GetValue(pIgnore_caseKey, pIgnore_caseVal);
        if(pIgnore_caseVal != null) {
            
            pIgnore_case = new Boolean(false);
            jsonToValue(pIgnore_case, pIgnore_caseVal, L"Boolean", L"Boolean");
        }
        delete pIgnore_caseKey;
JsonString* pNull_handlingKey = new JsonString(L"null_handling");
        IJsonValue* pNull_handlingVal = null;
        pJsonObject->GetValue(pNull_handlingKey, pNull_handlingVal);
        if(pNull_handlingVal != null) {
            
            pNull_handling = new String();
            jsonToValue(pNull_handling, pNull_handlingVal, L"String", L"String");
        }
        delete pNull_handlingKey;
JsonString* pPropertyKey = new JsonString(L"property");
        IJsonValue* pPropertyVal = null;
        pJsonObject->GetValue(pPropertyKey, pPropertyVal);
        if(pPropertyVal != null) {
            
            pProperty = new String();
            jsonToValue(pProperty, pPropertyVal, L"String", L"String");
        }
        delete pPropertyKey;
    }
}

SamiOrder::SamiOrder(String* json) {
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
SamiOrder::asJson ()
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
SamiOrder::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pAscendingKey = new JsonString(L"ascending");
    pJsonObject->Add(pAscendingKey, toJson(getPAscending(), "Boolean", ""));

    JsonString *pDirectionKey = new JsonString(L"direction");
    pJsonObject->Add(pDirectionKey, toJson(getPDirection(), "String", ""));

    JsonString *pIgnore_caseKey = new JsonString(L"ignore_case");
    pJsonObject->Add(pIgnore_caseKey, toJson(getPIgnoreCase(), "Boolean", ""));

    JsonString *pNull_handlingKey = new JsonString(L"null_handling");
    pJsonObject->Add(pNull_handlingKey, toJson(getPNullHandling(), "String", ""));

    JsonString *pPropertyKey = new JsonString(L"property");
    pJsonObject->Add(pPropertyKey, toJson(getPProperty(), "String", ""));

    return pJsonObject;
}

Boolean*
SamiOrder::getPAscending() {
    return pAscending;
}
void
SamiOrder::setPAscending(Boolean* pAscending) {
    this->pAscending = pAscending;
}

String*
SamiOrder::getPDirection() {
    return pDirection;
}
void
SamiOrder::setPDirection(String* pDirection) {
    this->pDirection = pDirection;
}

Boolean*
SamiOrder::getPIgnoreCase() {
    return pIgnore_case;
}
void
SamiOrder::setPIgnoreCase(Boolean* pIgnore_case) {
    this->pIgnore_case = pIgnore_case;
}

String*
SamiOrder::getPNullHandling() {
    return pNull_handling;
}
void
SamiOrder::setPNullHandling(String* pNull_handling) {
    this->pNull_handling = pNull_handling;
}

String*
SamiOrder::getPProperty() {
    return pProperty;
}
void
SamiOrder::setPProperty(String* pProperty) {
    this->pProperty = pProperty;
}



} /* namespace Swagger */

