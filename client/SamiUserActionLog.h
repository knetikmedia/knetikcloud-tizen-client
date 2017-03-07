/*
 * SamiUserActionLog.h
 * 
 * 
 */

#ifndef SamiUserActionLog_H_
#define SamiUserActionLog_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Collection::HashMap;
using Tizen::Base::Collection::IList;
using Tizen::Base::Integer;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiUserActionLog: public SamiObject {
public:
    SamiUserActionLog();
    SamiUserActionLog(String* json);
    virtual ~SamiUserActionLog();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiUserActionLog* fromJson(String* obj);

    String* getPActionDescription();
    void setPActionDescription(String* pAction_description);
    String* getPActionName();
    void setPActionName(String* pAction_name);
    Long* getPCreatedDate();
    void setPCreatedDate(Long* pCreated_date);
    HashMap* getPDetails();
    void setPDetails(HashMap* pDetails);
    String* getPId();
    void setPId(String* pId);
    String* getPRequestId();
    void setPRequestId(String* pRequest_id);
    Integer* getPUserId();
    void setPUserId(Integer* pUser_id);

private:
    String* pAction_description;
String* pAction_name;
Long* pCreated_date;
HashMap* pDetails;
String* pId;
String* pRequest_id;
Integer* pUser_id;
};

} /* namespace Swagger */

#endif /* SamiUserActionLog_H_ */
