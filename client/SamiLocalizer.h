/*
 * SamiLocalizer.h
 * 
 * 
 */

#ifndef SamiLocalizer_H_
#define SamiLocalizer_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;




namespace Swagger {

class SamiLocalizer: public SamiObject {
public:
    SamiLocalizer();
    SamiLocalizer(String* json);
    virtual ~SamiLocalizer();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiLocalizer* fromJson(String* obj);


private:
    };

} /* namespace Swagger */

#endif /* SamiLocalizer_H_ */
