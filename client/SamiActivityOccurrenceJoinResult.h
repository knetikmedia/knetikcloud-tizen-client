/*
 * SamiActivityOccurrenceJoinResult.h
 * 
 * 
 */

#ifndef SamiActivityOccurrenceJoinResult_H_
#define SamiActivityOccurrenceJoinResult_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiActivityEntitlementResource.h"
using Tizen::Base::Integer;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiActivityOccurrenceJoinResult: public SamiObject {
public:
    SamiActivityOccurrenceJoinResult();
    SamiActivityOccurrenceJoinResult(String* json);
    virtual ~SamiActivityOccurrenceJoinResult();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiActivityOccurrenceJoinResult* fromJson(String* obj);

    SamiActivityEntitlementResource* getPEntitlement();
    void setPEntitlement(SamiActivityEntitlementResource* pEntitlement);
    Integer* getPErrorCode();
    void setPErrorCode(Integer* pError_code);
    String* getPMessage();
    void setPMessage(String* pMessage);
    Long* getPUserId();
    void setPUserId(Long* pUser_id);

private:
    SamiActivityEntitlementResource* pEntitlement;
Integer* pError_code;
String* pMessage;
Long* pUser_id;
};

} /* namespace Swagger */

#endif /* SamiActivityOccurrenceJoinResult_H_ */
