/*
 * SamiBatch.h
 * 
 * 
 */

#ifndef SamiBatch_H_
#define SamiBatch_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiBatchRequest.h"
using Tizen::Base::Collection::IList;
using Tizen::Base::Integer;


namespace Swagger {

class SamiBatch: public SamiObject {
public:
    SamiBatch();
    SamiBatch(String* json);
    virtual ~SamiBatch();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiBatch* fromJson(String* obj);

    IList* getPBatch();
    void setPBatch(IList* pBatch);
    Integer* getPTimeout();
    void setPTimeout(Integer* pTimeout);

private:
    IList* pBatch;
Integer* pTimeout;
};

} /* namespace Swagger */

#endif /* SamiBatch_H_ */
