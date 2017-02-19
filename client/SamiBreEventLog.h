/*
 * SamiBreEventLog.h
 * 
 * 
 */

#ifndef SamiBreEventLog_H_
#define SamiBreEventLog_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiBreRuleLog.h"
#include "SamiObject.h"
using Tizen::Base::Collection::IList;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiBreEventLog: public SamiObject {
public:
    SamiBreEventLog();
    SamiBreEventLog(String* json);
    virtual ~SamiBreEventLog();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiBreEventLog* fromJson(String* obj);

    String* getPCustomer();
    void setPCustomer(String* pCustomer);
    Long* getPEventId();
    void setPEventId(Long* pEvent_id);
    String* getPEventName();
    void setPEventName(String* pEvent_name);
    Long* getPEventStartDate();
    void setPEventStartDate(Long* pEvent_start_date);
    String* getPId();
    void setPId(String* pId);
    SamiObject* getPParameters();
    void setPParameters(SamiObject* pParameters);
    IList* getPRules();
    void setPRules(IList* pRules);

private:
    String* pCustomer;
Long* pEvent_id;
String* pEvent_name;
Long* pEvent_start_date;
String* pId;
SamiObject* pParameters;
IList* pRules;
};

} /* namespace Swagger */

#endif /* SamiBreEventLog_H_ */
