/*
 * SamiTimePeriodGettable.h
 * 
 * 
 */

#ifndef SamiTimePeriodGettable_H_
#define SamiTimePeriodGettable_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


#include "SamiBehavior.h"
using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiTimePeriodGettable: public SamiObject {
public:
    SamiTimePeriodGettable();
    SamiTimePeriodGettable(String* json);
    virtual ~SamiTimePeriodGettable();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiTimePeriodGettable* fromJson(String* obj);

    String* getPDescription();
    void setPDescription(String* pDescription);
    String* getPTypeHint();
    void setPTypeHint(String* pType_hint);
    Integer* getPGetLimit();
    void setPGetLimit(Integer* pGet_limit);
    String* getPGroupName();
    void setPGroupName(String* pGroup_name);
    Integer* getPTimeLength();
    void setPTimeLength(Integer* pTime_length);
    String* getPUnitOfTime();
    void setPUnitOfTime(String* pUnit_of_time);

private:
    String* pDescription;
String* pType_hint;
Integer* pGet_limit;
String* pGroup_name;
Integer* pTime_length;
String* pUnit_of_time;
};

} /* namespace Swagger */

#endif /* SamiTimePeriodGettable_H_ */
