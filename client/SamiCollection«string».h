/*
 * SamiCollection«string».h
 * 
 * 
 */

#ifndef SamiCollection«string»_H_
#define SamiCollection«string»_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;




namespace Swagger {

class SamiCollection«string»: public SamiObject {
public:
    SamiCollection«string»();
    SamiCollection«string»(String* json);
    virtual ~SamiCollection«string»();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiCollection«string»* fromJson(String* obj);


private:
    };

} /* namespace Swagger */

#endif /* SamiCollection«string»_H_ */
