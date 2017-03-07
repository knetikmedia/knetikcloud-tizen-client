/*
 * SamiBreRule.h
 * 
 * 
 */

#ifndef SamiBreRule_H_
#define SamiBreRule_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiActionResource.h"
#include "SamiPredicateOperation.h"
using Tizen::Base::Boolean;
using Tizen::Base::Integer;
using Tizen::Base::Long;
using Tizen::Base::String;


namespace Swagger {

class SamiBreRule: public SamiObject {
public:
    SamiBreRule();
    SamiBreRule(String* json);
    virtual ~SamiBreRule();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiBreRule* fromJson(String* obj);

    SamiActionResource* getPActions();
    void setPActions(SamiActionResource* pActions);
    SamiPredicateOperation* getPCondition();
    void setPCondition(SamiPredicateOperation* pCondition);
    String* getPConditionText();
    void setPConditionText(String* pCondition_text);
    String* getPDescription();
    void setPDescription(String* pDescription);
    Boolean* getPEnabled();
    void setPEnabled(Boolean* pEnabled);
    Long* getPEndDate();
    void setPEndDate(Long* pEnd_date);
    String* getPEventName();
    void setPEventName(String* pEvent_name);
    String* getPId();
    void setPId(String* pId);
    String* getPName();
    void setPName(String* pName);
    Integer* getPSort();
    void setPSort(Integer* pSort);
    Long* getPStartDate();
    void setPStartDate(Long* pStart_date);
    Boolean* getPSystemRule();
    void setPSystemRule(Boolean* pSystem_rule);

private:
    SamiActionResource* pActions;
SamiPredicateOperation* pCondition;
String* pCondition_text;
String* pDescription;
Boolean* pEnabled;
Long* pEnd_date;
String* pEvent_name;
String* pId;
String* pName;
Integer* pSort;
Long* pStart_date;
Boolean* pSystem_rule;
};

} /* namespace Swagger */

#endif /* SamiBreRule_H_ */
