
#include "SamiBatch.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiBatch::SamiBatch() {
    init();
}

SamiBatch::~SamiBatch() {
    this->cleanup();
}

void
SamiBatch::init() {
    pBatch = null;
}

void
SamiBatch::cleanup() {
    if(pBatch != null) {
        pBatch->RemoveAll(true);
        delete pBatch;
        pBatch = null;
    }
}


SamiBatch*
SamiBatch::fromJson(String* json) {
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
SamiBatch::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pBatchKey = new JsonString(L"batch");
        IJsonValue* pBatchVal = null;
        pJsonObject->GetValue(pBatchKey, pBatchVal);
        if(pBatchVal != null) {
            pBatch = new ArrayList();
            
            jsonToValue(pBatch, pBatchVal, L"IList", L"SamiBatchRequest");
        }
        delete pBatchKey;
    }
}

SamiBatch::SamiBatch(String* json) {
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
SamiBatch::asJson ()
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
SamiBatch::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pBatchKey = new JsonString(L"batch");
    pJsonObject->Add(pBatchKey, toJson(getPBatch(), "SamiBatchRequest", "array"));

    return pJsonObject;
}

IList*
SamiBatch::getPBatch() {
    return pBatch;
}
void
SamiBatch::setPBatch(IList* pBatch) {
    this->pBatch = pBatch;
}



} /* namespace Swagger */

