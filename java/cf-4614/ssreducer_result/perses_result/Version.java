import java.util.*;
import java.util.stream.*;
             class Version {
         static Map<String, String> getAllVersionInformation() {
    return                       null;
  }
                       {
    Version.getAllVersionInformation().entrySet().stream()
      .map(e ->               "%s:%s"                           )
      .collect(Collectors.joining(    ));
  }
}
