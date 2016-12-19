
#include "SamiPage«AchievementDefinitionResource».h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiPage«AchievementDefinitionResource»::SamiPage«AchievementDefinitionResource»() {
    init();
}

SamiPage«AchievementDefinitionResource»::~SamiPage«AchievementDefinitionResource»() {
    this->cleanup();
}

void
SamiPage«AchievementDefinitionResource»::init() {
    pContent = null;
pFirst = null;
pLast = null;
pNumber = null;
pNumber_of_elements = null;
pSize = null;
pSort = null;
pTotal_elements = null;
pTotal_pages = null;
}

void
SamiPage«AchievementDefinitionResource»::cleanup() {
    if(pContent != null) {
        pContent->RemoveAll(true);
        delete pContent;
        pContent = null;
    }
if(pFirst != null) {
        
        delete pFirst;
        pFirst = null;
    }
if(pLast != null) {
        
        delete pLast;
        pLast = null;
    }
if(pNumber != null) {
        
        delete pNumber;
        pNumber = null;
    }
if(pNumber_of_elements != null) {
        
        delete pNumber_of_elements;
        pNumber_of_elements = null;
    }
if(pSize != null) {
        
        delete pSize;
        pSize = null;
    }
if(pSort != null) {
        
        delete pSort;
        pSort = null;
    }
if(pTotal_elements != null) {
        
        delete pTotal_elements;
        pTotal_elements = null;
    }
if(pTotal_pages != null) {
        
        delete pTotal_pages;
        pTotal_pages = null;
    }
}


SamiPage«AchievementDefinitionResource»*
SamiPage«AchievementDefinitionResource»::fromJson(String* json) {
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
SamiPage«AchievementDefinitionResource»::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pContentKey = new JsonString(L"content");
        IJsonValue* pContentVal = null;
        pJsonObject->GetValue(pContentKey, pContentVal);
        if(pContentVal != null) {
            pContent = new ArrayList();
            
            jsonToValue(pContent, pContentVal, L"IList", L"SamiAchievementDefinitionResource");
        }
        delete pContentKey;
JsonString* pFirstKey = new JsonString(L"first");
        IJsonValue* pFirstVal = null;
        pJsonObject->GetValue(pFirstKey, pFirstVal);
        if(pFirstVal != null) {
            
            pFirst = new Boolean(false);
            jsonToValue(pFirst, pFirstVal, L"Boolean", L"Boolean");
        }
        delete pFirstKey;
JsonString* pLastKey = new JsonString(L"last");
        IJsonValue* pLastVal = null;
        pJsonObject->GetValue(pLastKey, pLastVal);
        if(pLastVal != null) {
            
            pLast = new Boolean(false);
            jsonToValue(pLast, pLastVal, L"Boolean", L"Boolean");
        }
        delete pLastKey;
JsonString* pNumberKey = new JsonString(L"number");
        IJsonValue* pNumberVal = null;
        pJsonObject->GetValue(pNumberKey, pNumberVal);
        if(pNumberVal != null) {
            
            pNumber = new Integer();
            jsonToValue(pNumber, pNumberVal, L"Integer", L"Integer");
        }
        delete pNumberKey;
JsonString* pNumber_of_elementsKey = new JsonString(L"number_of_elements");
        IJsonValue* pNumber_of_elementsVal = null;
        pJsonObject->GetValue(pNumber_of_elementsKey, pNumber_of_elementsVal);
        if(pNumber_of_elementsVal != null) {
            
            pNumber_of_elements = new Integer();
            jsonToValue(pNumber_of_elements, pNumber_of_elementsVal, L"Integer", L"Integer");
        }
        delete pNumber_of_elementsKey;
JsonString* pSizeKey = new JsonString(L"size");
        IJsonValue* pSizeVal = null;
        pJsonObject->GetValue(pSizeKey, pSizeVal);
        if(pSizeVal != null) {
            
            pSize = new Integer();
            jsonToValue(pSize, pSizeVal, L"Integer", L"Integer");
        }
        delete pSizeKey;
JsonString* pSortKey = new JsonString(L"sort");
        IJsonValue* pSortVal = null;
        pJsonObject->GetValue(pSortKey, pSortVal);
        if(pSortVal != null) {
            
            pSort = new SamiSort();
            jsonToValue(pSort, pSortVal, L"SamiSort", L"SamiSort");
        }
        delete pSortKey;
JsonString* pTotal_elementsKey = new JsonString(L"total_elements");
        IJsonValue* pTotal_elementsVal = null;
        pJsonObject->GetValue(pTotal_elementsKey, pTotal_elementsVal);
        if(pTotal_elementsVal != null) {
            
            pTotal_elements = new Long();
            jsonToValue(pTotal_elements, pTotal_elementsVal, L"Long", L"Long");
        }
        delete pTotal_elementsKey;
JsonString* pTotal_pagesKey = new JsonString(L"total_pages");
        IJsonValue* pTotal_pagesVal = null;
        pJsonObject->GetValue(pTotal_pagesKey, pTotal_pagesVal);
        if(pTotal_pagesVal != null) {
            
            pTotal_pages = new Integer();
            jsonToValue(pTotal_pages, pTotal_pagesVal, L"Integer", L"Integer");
        }
        delete pTotal_pagesKey;
    }
}

SamiPage«AchievementDefinitionResource»::SamiPage«AchievementDefinitionResource»(String* json) {
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
SamiPage«AchievementDefinitionResource»::asJson ()
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
SamiPage«AchievementDefinitionResource»::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pContentKey = new JsonString(L"content");
    pJsonObject->Add(pContentKey, toJson(getPContent(), "SamiAchievementDefinitionResource", "array"));

    JsonString *pFirstKey = new JsonString(L"first");
    pJsonObject->Add(pFirstKey, toJson(getPFirst(), "Boolean", ""));

    JsonString *pLastKey = new JsonString(L"last");
    pJsonObject->Add(pLastKey, toJson(getPLast(), "Boolean", ""));

    JsonString *pNumberKey = new JsonString(L"number");
    pJsonObject->Add(pNumberKey, toJson(getPNumber(), "Integer", ""));

    JsonString *pNumber_of_elementsKey = new JsonString(L"number_of_elements");
    pJsonObject->Add(pNumber_of_elementsKey, toJson(getPNumberOfElements(), "Integer", ""));

    JsonString *pSizeKey = new JsonString(L"size");
    pJsonObject->Add(pSizeKey, toJson(getPSize(), "Integer", ""));

    JsonString *pSortKey = new JsonString(L"sort");
    pJsonObject->Add(pSortKey, toJson(getPSort(), "SamiSort", ""));

    JsonString *pTotal_elementsKey = new JsonString(L"total_elements");
    pJsonObject->Add(pTotal_elementsKey, toJson(getPTotalElements(), "Long", ""));

    JsonString *pTotal_pagesKey = new JsonString(L"total_pages");
    pJsonObject->Add(pTotal_pagesKey, toJson(getPTotalPages(), "Integer", ""));

    return pJsonObject;
}

IList*
SamiPage«AchievementDefinitionResource»::getPContent() {
    return pContent;
}
void
SamiPage«AchievementDefinitionResource»::setPContent(IList* pContent) {
    this->pContent = pContent;
}

Boolean*
SamiPage«AchievementDefinitionResource»::getPFirst() {
    return pFirst;
}
void
SamiPage«AchievementDefinitionResource»::setPFirst(Boolean* pFirst) {
    this->pFirst = pFirst;
}

Boolean*
SamiPage«AchievementDefinitionResource»::getPLast() {
    return pLast;
}
void
SamiPage«AchievementDefinitionResource»::setPLast(Boolean* pLast) {
    this->pLast = pLast;
}

Integer*
SamiPage«AchievementDefinitionResource»::getPNumber() {
    return pNumber;
}
void
SamiPage«AchievementDefinitionResource»::setPNumber(Integer* pNumber) {
    this->pNumber = pNumber;
}

Integer*
SamiPage«AchievementDefinitionResource»::getPNumberOfElements() {
    return pNumber_of_elements;
}
void
SamiPage«AchievementDefinitionResource»::setPNumberOfElements(Integer* pNumber_of_elements) {
    this->pNumber_of_elements = pNumber_of_elements;
}

Integer*
SamiPage«AchievementDefinitionResource»::getPSize() {
    return pSize;
}
void
SamiPage«AchievementDefinitionResource»::setPSize(Integer* pSize) {
    this->pSize = pSize;
}

SamiSort*
SamiPage«AchievementDefinitionResource»::getPSort() {
    return pSort;
}
void
SamiPage«AchievementDefinitionResource»::setPSort(SamiSort* pSort) {
    this->pSort = pSort;
}

Long*
SamiPage«AchievementDefinitionResource»::getPTotalElements() {
    return pTotal_elements;
}
void
SamiPage«AchievementDefinitionResource»::setPTotalElements(Long* pTotal_elements) {
    this->pTotal_elements = pTotal_elements;
}

Integer*
SamiPage«AchievementDefinitionResource»::getPTotalPages() {
    return pTotal_pages;
}
void
SamiPage«AchievementDefinitionResource»::setPTotalPages(Integer* pTotal_pages) {
    this->pTotal_pages = pTotal_pages;
}



} /* namespace Swagger */

