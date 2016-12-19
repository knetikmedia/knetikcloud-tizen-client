
#include "SamiActivityOccurrenceCreationFailure.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiActivityOccurrenceCreationFailure::SamiActivityOccurrenceCreationFailure() {
    init();
}

SamiActivityOccurrenceCreationFailure::~SamiActivityOccurrenceCreationFailure() {
    this->cleanup();
}

void
SamiActivityOccurrenceCreationFailure::init() {
    pUser_results = null;
}

void
SamiActivityOccurrenceCreationFailure::cleanup() {
    if(pUser_results != null) {
        pUser_results->RemoveAll(true);
        delete pUser_results;
        pUser_results = null;
    }
}


SamiActivityOccurrenceCreationFailure*
SamiActivityOccurrenceCreationFailure::fromJson(String* json) {
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
SamiActivityOccurrenceCreationFailure::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pUser_resultsKey = new JsonString(L"user_results");
        IJsonValue* pUser_resultsVal = null;
        pJsonObject->GetValue(pUser_resultsKey, pUser_resultsVal);
        if(pUser_resultsVal != null) {
            pUser_results = new ArrayList();
            
            jsonToValue(pUser_results, pUser_resultsVal, L"IList", L"SamiActivityOccurrenceJoinResult");
        }
        delete pUser_resultsKey;
    }
}

SamiActivityOccurrenceCreationFailure::SamiActivityOccurrenceCreationFailure(String* json) {
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
SamiActivityOccurrenceCreationFailure::asJson ()
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
SamiActivityOccurrenceCreationFailure::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pUser_resultsKey = new JsonString(L"user_results");
    pJsonObject->Add(pUser_resultsKey, toJson(getPUserResults(), "SamiActivityOccurrenceJoinResult", "array"));

    return pJsonObject;
}

IList*
SamiActivityOccurrenceCreationFailure::getPUserResults() {
    return pUser_results;
}
void
SamiActivityOccurrenceCreationFailure::setPUserResults(IList* pUser_results) {
    this->pUser_results = pUser_results;
}



} /* namespace Swagger */

