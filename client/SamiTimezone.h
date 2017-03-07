/*
 * SamiTimezone.h
 * 
 * 
 */

#ifndef SamiTimezone_H_
#define SamiTimezone_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Double;
using Tizen::Base::Integer;
using Tizen::Base::String;


namespace Swagger {

class SamiTimezone: public SamiObject {
public:
    SamiTimezone();
    SamiTimezone(String* json);
    virtual ~SamiTimezone();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiTimezone* fromJson(String* obj);

    String* getPCode();
    void setPCode(String* pCode);
    Integer* getPId();
    void setPId(Integer* pId);
    String* getPName();
    void setPName(String* pName);
    Double* getPOffset();
    void setPOffset(Double* pOffset);

private:
    String* pCode;
Integer* pId;
String* pName;
Double* pOffset;
};

} /* namespace Swagger */

#endif /* SamiTimezone_H_ */
