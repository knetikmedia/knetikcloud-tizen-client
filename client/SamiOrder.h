/*
 * SamiOrder.h
 * 
 * 
 */

#ifndef SamiOrder_H_
#define SamiOrder_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::Boolean;
using Tizen::Base::String;


namespace Swagger {

class SamiOrder: public SamiObject {
public:
    SamiOrder();
    SamiOrder(String* json);
    virtual ~SamiOrder();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiOrder* fromJson(String* obj);

    Boolean* getPAscending();
    void setPAscending(Boolean* pAscending);
    String* getPDirection();
    void setPDirection(String* pDirection);
    Boolean* getPIgnoreCase();
    void setPIgnoreCase(Boolean* pIgnore_case);
    String* getPNullHandling();
    void setPNullHandling(String* pNull_handling);
    String* getPProperty();
    void setPProperty(String* pProperty);

private:
    Boolean* pAscending;
String* pDirection;
Boolean* pIgnore_case;
String* pNull_handling;
String* pProperty;
};

} /* namespace Swagger */

#endif /* SamiOrder_H_ */
