/*
 * SamiSchedule.h
 * 
 * 
 */

#ifndef SamiSchedule_H_
#define SamiSchedule_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiSchedule: public SamiObject {
public:
    SamiSchedule();
    SamiSchedule(String* json);
    virtual ~SamiSchedule();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiSchedule* fromJson(String* obj);

    Integer* getPDuration();
    void setPDuration(Integer* pDuration);
    String* getPDurationUnit();
    void setPDurationUnit(String* pDuration_unit);
    String* getPRepeat();
    void setPRepeat(String* pRepeat);

private:
    Integer* pDuration;
String* pDuration_unit;
String* pRepeat;
};

} /* namespace Swagger */

#endif /* SamiSchedule_H_ */
