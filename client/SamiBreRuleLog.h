/*
 * SamiBreRuleLog.h
 * 
 * 
 */

#ifndef SamiBreRuleLog_H_
#define SamiBreRuleLog_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Boolean;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiBreRuleLog: public SamiObject {
public:
    SamiBreRuleLog();
    SamiBreRuleLog(String* json);
    virtual ~SamiBreRuleLog();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiBreRuleLog* fromJson(String* obj);

    Boolean* getPRan();
    void setPRan(Boolean* pRan);
    String* getPReason();
    void setPReason(String* pReason);
    Long* getPRuleEndDate();
    void setPRuleEndDate(Long* pRule_end_date);
    String* getPRuleId();
    void setPRuleId(String* pRule_id);
    String* getPRuleName();
    void setPRuleName(String* pRule_name);
    Long* getPRuleStartDate();
    void setPRuleStartDate(Long* pRule_start_date);

private:
    Boolean* pRan;
String* pReason;
Long* pRule_end_date;
String* pRule_id;
String* pRule_name;
Long* pRule_start_date;
};

} /* namespace Swagger */

#endif /* SamiBreRuleLog_H_ */
