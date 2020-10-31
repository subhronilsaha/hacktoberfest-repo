defmodule BubbleSort do
  def run(list) when is_list(list) do
    sorted = do_run(list)
    run(sorted, list)
  end

  def run(l, l), do: l
  def run(l, _), do: run(l)

  def do_run([x, y | t]) when x > y, do: [y | do_run([x | t])]
  def do_run([x, y | t]), do: [x | do_run([y | t])]
  def do_run(list), do: list
end

BubbleSort.run([30, 74, 13, 70, 66, 48, 24, 80, 10, 31, 1, 83, 7, 14, 63, 57, 32, 5, 35, 46]) |> IO.inspect
