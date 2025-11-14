import circt.stage._
import EXU._
import IDU._
import IFU._
import LSU._
import top._

object Elaborate extends App {
  def top = new SingleCycleCPU()
  val generator = Seq(chisel3.stage.ChiselGeneratorAnnotation(() => top))
  (new ChiselStage).execute(args, generator :+ CIRCTTargetAnnotation(CIRCTTarget.Verilog))
}
