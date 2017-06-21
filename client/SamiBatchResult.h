/*
 * SamiBatchResult.h
 * 
 * 
 */

#ifndef SamiBatchResult_H_
#define SamiBatchResult_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiBatchReturn.h"
using Tizen::Base::Collection::IList;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiBatchResult: public SamiObject {
public:
    SamiBatchResult();
    SamiBatchResult(String* json);
    virtual ~SamiBatchResult();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiBatchResult* fromJson(String* obj);

    IList* getPBatchReturn();
    void setPBatchReturn(IList* pBatch_return);
    Long* getPCreatedDate();
    void setPCreatedDate(Long* pCreated_date);
    String* getPId();
    void setPId(String* pId);
    Long* getPUpdatedDate();
    void setPUpdatedDate(Long* pUpdated_date);

private:
    IList* pBatch_return;
Long* pCreated_date;
String* pId;
Long* pUpdated_date;
};

} /* namespace Swagger */

#endif /* SamiBatchResult_H_ */
